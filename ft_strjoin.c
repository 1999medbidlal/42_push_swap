/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbidlal <mbidlal@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 11:08:18 by mbidlal           #+#    #+#             */
/*   Updated: 2025/12/23 12:30:07 by mbidlal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_count_len(char **str, int ac)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (i < ac)
	{
		j = 0;
		while (str[i][j])
		{
			count++;
			j++;
		}
		i++;
	}
	return (count);
}

char	*ft_strcat(char *dest, char *src, int index, int ac)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (index < ac - 1)
	{
		dest[i] = ' ';
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(char **str, int ac)
{
	char	*res;
	int		len;
	int		i;

	len = ft_count_len(str, ac);
	res = malloc(sizeof(char) * (len + ac));
	if (!res)
		return (NULL);
	res[0] = '\0';
	i = 0;
	while (i < ac)
	{
		ft_strcat(res, str[i], i, ac);
		i++;
	}
	return (res);
}
