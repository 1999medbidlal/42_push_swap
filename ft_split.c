/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbidlal <mbidlal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 13:57:43 by mbidlal           #+#    #+#             */
/*   Updated: 2025/12/27 20:23:41 by mbidlal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_count_word(char *s)
{
	int	word;
	int	count;
	int	i;

	word = 0;
	count = 0;
	i = 0;
	while (s[i])
	{
		if (!((s[i] >= 9 && s[i] <= 13) || s[i] == ' '))
		{
			if (word == 0)
			{
				count += 1;
				word = 1;
			}
		}
		else
			word = 0;
		i++;
	}
	return (count);
}

int	ft_total_len(char *s)
{
	int	i;

	i = 0;
	while (s[i] && !((s[i] >= 9 && s[i] <= 13) || s[i] == ' '))
		i++;
	return (i);
}

char	**ft_free(char **s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (NULL);
}

char	**ft_concatenate(char **res, char *str, int word)
{
	int	j;
	int	k;
	int	len;
	int	i;

	j = 0;
	i = 0;
	while (i < word)
	{
		while ((str[j] >= 9 && str[j] <= 13) || str[j] == ' ')
			j++;
		len = ft_total_len(&str[j]);
		res[i] = malloc(len + 1);
		if (!res[i])
			return (ft_free(res));
		k = 0;
		while (k < len)
			res[i][k++] = str[j++];
		res[i][k] = '\0';
		i++;
	}
	res[i] = NULL;
	return (res);
}

char	**ft_split(char *str)
{
	char	**res;
	int		word;

	word = ft_count_word(str);
	res = malloc(sizeof(char *) * (word + 1));
	if (!res)
		return (NULL);
	ft_concatenate(res, str, word);
	return (res);
}
