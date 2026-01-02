/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbidlal <mbidlal@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 18:43:49 by mbidlal           #+#    #+#             */
/*   Updated: 2025/12/24 18:08:58 by mbidlal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_is_space(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int	ft_is_sign(char c)
{
	return (c == '+' || c == '-');
}

int	ft_is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_check_numbers(char *s)
{
	int	i;
	int	found;

	i = 0;
	found = 0;
	while (s[i])
	{
		while (ft_is_space(s[i]))
			i++;
		if (!s[i])
			break ;
		if (ft_is_sign(s[i]))
			i++;
		if (!ft_is_digit(s[i]))
			return (1);
		while (ft_is_digit(s[i]))
			i++;
		found = 1;
		if (s[i] && !ft_is_space(s[i]))
			return (1);
	}
	return (!found);
}
