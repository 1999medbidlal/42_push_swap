/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shanks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbidlal <mbidlal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 21:51:25 by mbidlal           #+#    #+#             */
/*   Updated: 2026/01/01 14:21:18 by mbidlal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_perfect_range(int size)
{
	int	range;

	if (size <= 100)
		range = 11;
	else
		range = 35;
	return (range);
}

int	ft_max_pos(t_list *a, int size)
{
	int	i;

	i = 0;
	while (a)
	{
		if (a->pos == size - 1)
			return (i);
		a = a->next;
		i++;
	}
	return (i);
}

void	ft_b_to_a(t_list **a, t_list **b, int size)
{
	int	max;

	while (*b)
	{
		max = ft_max_pos(*b, size);
		if (max <= size / 2)
		{
			while (ft_max_pos(*b, size) != 0)
				rb(b);
			pa(b, a);
		}
		else
		{
			while (ft_max_pos(*b, size) != 0)
				rrb(b);
			pa(b, a);
		}
		size--;
	}
}

void	ft_shanks(t_list **a, t_list **b, int size)
{
	int	min;
	int	range;

	min = 0;
	range = ft_perfect_range(size);
	while (*a)
	{
		if ((*a)->pos <= min + range)
		{
			pb(a, b);
			if ((*b)->pos < min)
				rb(b);
			min++;
		}
		else
			ra(a);
	}
	ft_b_to_a(a, b, size);
}
