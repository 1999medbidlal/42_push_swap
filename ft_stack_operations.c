/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_operations.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbidlal <mbidlal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 13:16:55 by mbidlal           #+#    #+#             */
/*   Updated: 2025/12/31 14:32:27 by mbidlal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_swap(t_list **stack)
{
	t_list	*temp;
	t_list	*link;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	temp = *stack;
	link = temp->next;
	(*stack)->next = link->next;
	link->next = *stack;
	*stack = link;
}

void	ft_push(t_list **from, t_list **exit)
{
	t_list	*temp;

	if (!from || !(*from))
		return ;
	if (!(*exit))
	{
		temp = *from;
		*from = (*from)->next;
		*exit = temp;
		temp->next = NULL;
		return ;
	}
	else
	{
		temp = *from;
		*from = (*from)->next;
		temp->next = *exit;
		*exit = temp;
	}
}

void	ft_rotate(t_list **stack)
{
	t_list	*temp;
	t_list	*last;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	temp = *stack;
	last = ft_last_node(*stack);
	*stack = (*stack)->next;
	last->next = temp;
	temp->next = NULL;
}

t_list	*ft_prev_node(t_list *lst)
{
	t_list	*prev;

	if (!lst || !lst->next)
		return (NULL);
	prev = lst;
	while (lst->next)
	{
		prev = lst;
		lst = lst->next;
	}
	return (prev);
}

void	ft_reverse_rotate(t_list **stack)
{
	t_list	*temp;
	t_list	*last;
	t_list	*prev;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	temp = *stack;
	last = ft_last_node(*stack);
	prev = ft_prev_node(*stack);
	*stack = last;
	last->next = temp;
	prev->next = NULL;
}
