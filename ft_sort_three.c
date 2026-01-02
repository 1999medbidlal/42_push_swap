/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbidlal <mbidlal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 17:11:53 by mbidlal           #+#    #+#             */
/*   Updated: 2025/12/30 18:33:30 by mbidlal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_sort_three(t_list **a)
{
	int	x;
	int	y;
	int	z;

	x = (*a)->pos;
	y = (*a)->next->pos;
	z = (*a)->next->next->pos;
	if (x < y && y < z)
		return ;
	else if (x > y && x < z)
		sa(a);
	else if (x > y && y > z)
	{
		sa(a);
		rra(a);
	}
	else if (x > y && x > z && y < z)
		ra(a);
	else if (x < y && x < z && y > z)
	{
		sa(a);
		ra(a);
	}
	else
		rra(a);
}
