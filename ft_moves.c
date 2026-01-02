/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbidlal <mbidlal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 21:24:30 by mbidlal           #+#    #+#             */
/*   Updated: 2025/12/30 14:28:03 by mbidlal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_moves(t_list *lst)
{
	int		index;
	t_list	*tp1;
	t_list	*tp2;

	tp1 = lst;
	while (tp1)
	{
		tp2 = lst;
		index = 0;
		while (tp2)
		{
			if (tp1->data > tp2->data)
				index++;
			tp2 = tp2->next;
		}
		tp1->pos = index;
		tp1 = tp1->next;
	}
}
