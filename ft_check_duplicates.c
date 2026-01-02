/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_duplicates.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbidlal <mbidlal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 20:24:38 by mbidlal           #+#    #+#             */
/*   Updated: 2025/12/27 20:24:45 by mbidlal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_duplicates(t_list *lst)
{
	t_list	*tmp;
	t_list	*head;

	head = lst;
	while (lst)
	{
		tmp = lst->next;
		while (tmp)
		{
			if (tmp->data == lst->data)
			{
				write(2, "Error\n", 6);
				ft_clean_lst(head);
				return (1);
			}
			tmp = tmp->next;
		}
		lst = lst->next;
	}
	return (0);
}
