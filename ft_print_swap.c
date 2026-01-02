/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_swap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbidlal <mbidlal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 18:29:21 by mbidlal           #+#    #+#             */
/*   Updated: 2025/12/30 14:34:00 by mbidlal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	sa(t_list **a)
{
	ft_swap(a);
	write(1, "sa\n", 3);
}

void	sb(t_list **b)
{
	ft_swap(b);
	write(1, "sb\n", 3);
}

void	ss(t_list **a, t_list **b)
{
	ft_swap(a);
	ft_swap(b);
	write(1, "ss\n", 3);
}
