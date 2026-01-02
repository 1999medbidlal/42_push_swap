/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbidlal <mbidlal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 18:48:35 by mbidlal           #+#    #+#             */
/*   Updated: 2026/01/01 18:41:56 by mbidlal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

t_list	*ft_check_duplicates_range(char **res, int len)
{
	long	a;
	int		i;
	t_list	*head;
	t_list	*new;

	i = 0;
	head = 0;
	while (i < len)
	{
		a = ft_atoi(res[i]);
		new = ft_new_node(a);
		if (a == 2147483648 || !new)
		{
			write(2, "Error\n", 6);
			ft_clean_lst(head);
			ft_clean_lst(new);
			return (NULL);
		}
		ft_add_node_back(&head, new);
		i++;
	}
	if (ft_duplicates(head))
		return (NULL);
	return (head);
}

t_list	*ft_parcing(char **av, int ac)
{
	char	*joined;
	char	**result;
	int		len;
	t_list	*head;

	joined = ft_strjoin(av, ac);
	len = ft_count_word(joined);
	result = ft_split(joined);
	free(joined);
	head = ft_check_duplicates_range(result, len);
	ft_free(result);
	return (head);
}

void	ft_sort_list(t_list **stack_a)
{
	t_list	*stack_b;
	int		size;

	size = ft_size_list(*stack_a);
	stack_b = NULL;
	ft_moves(*stack_a);
	if (ft_cheak_pos(*stack_a))
	{
		if (size == 2)
			sa(stack_a);
		else if (size == 3)
			ft_sort_three(stack_a);
		else if (size == 4 || size == 5)
			ft_sort_five(stack_a, &stack_b, size);
		else
			ft_shanks(stack_a, &stack_b, size);
		ft_clean_lst(*stack_a);
		ft_clean_lst((stack_b));
	}
	else
		ft_clean_lst(*stack_a);
}

int	main(int ac, char **av)
{
	int		i;
	t_list	*head;

	if (ac > 1)
	{
		i = 1;
		while (i < ac)
		{
			if (!ft_check_numbers(av[i]) && av[i][0])
				i++;
			else
			{
				write(2, "Error\n", 6);
				return (0);
			}
		}
		head = ft_parcing(av + 1, ac - 1);
		if (!head)
			return (0);
		ft_sort_list(&head);
	}
	return (0);
}
