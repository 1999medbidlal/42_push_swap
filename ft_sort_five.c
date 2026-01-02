/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbidlal <mbidlal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 10:27:31 by mbidlal           #+#    #+#             */
/*   Updated: 2026/01/01 14:32:31 by mbidlal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_found_pos(t_list *a)
{
	int	i;

	i = 0;
	while (a)
	{
		if (a->pos == 0)
			return (i);
		a = a->next;
		i++;
	}
	return (i);
}

void	ft_choice(t_list **a, int size, int index)
{
	int	i;

	if (index <= size / 2)
	{
		i = 0;
		while (i < index)
		{
			ra(a);
			i++;
		}
	}
	else
	{
		i = 0;
		while (i < size - index)
		{
			rra(a);
			i++;
		}
	}
}

void	ft_sort_five(t_list **a, t_list **b, int size)
{
	int	index;

	if (size == 4)
	{
		index = ft_found_pos(*a);
		ft_choice(a, size, index);
		pb(a, b);
		ft_sort_three(a);
		pa(b, a);
	}
	else
	{
		index = ft_found_pos(*a);
		ft_choice(a, size, index);
		pb(a, b);
		size--;
		ft_moves(*a);
		index = ft_found_pos(*a);
		ft_choice(a, size, index);
		pb(a, b);
		ft_sort_three(a);
		pa(b, a);
		pa(b, a);
	}
}

int	ft_cheak_pos(t_list *lst)
{
	int		i;

	i = 0;
	while (lst)
	{
		if (lst->pos != i)
			return (1);
		i++;
		lst = lst->next;
	}
	return (0);
}
