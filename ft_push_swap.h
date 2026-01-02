/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbidlal <mbidlal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 10:36:10 by mbidlal           #+#    #+#             */
/*   Updated: 2025/12/31 23:28:53 by mbidlal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				data;
	int				pos;
	struct s_list	*next;
}					t_list;
int					main(int ac, char **av);
/// Step 1 — Check numbers(input validation) ///
int					ft_check_numbers(char *s);
/// Step 2 — ft_strjoin /////
char				*ft_strjoin(char **str, int ac);
/// step 3 — ft_split ////
char				**ft_split(char *str);
long				ft_atoi(char *s);
char				**ft_free(char **s);
int					ft_count_word(char *s);
/// step 4 - ft_check_duplicates_range  ///
t_list				*ft_check_duplicates_range(char **res, int len);
int					ft_duplicates(t_list *lst);
/// step 5 - creation stack a ///
t_list				*ft_new_node(int content);
t_list				*ft_last_node(t_list *lst);
void				ft_add_node_back(t_list **lst, t_list *new);
void				ft_clean_lst(t_list *lst);
//// step 6 moves_size_list ////
void				ft_moves(t_list *lst);
int					ft_size_list(t_list *lst);
//// step 7 ft_stack_operations ///
void				ft_swap(t_list **stack);
void				ft_push(t_list **from, t_list **exit);
void				ft_rotate(t_list **stack);
void				ft_reverse_rotate(t_list **stack);
/// step 8 ft_print_opration ///
/*------  swap  -----*/
void				sa(t_list **a);
void				sb(t_list **a);
void				ss(t_list **a, t_list **b);
/*------  push  -----*/
void				pa(t_list **a, t_list **b);
void				pb(t_list **a, t_list **b);
/*------  rotate  -----*/
void				ra(t_list **a);
void				rb(t_list **a);
void				rr(t_list **a, t_list **b);
/*------  rev_rotate  -----*/
void				rra(t_list **a);
void				rrb(t_list **a);
void				rrr(t_list **a, t_list **b);
//// step 9 algo ///
int					ft_cheak_pos(t_list *lst);
void				ft_sort_three(t_list **lst);
void				ft_sort_five(t_list **a, t_list **b, int size);
void				ft_shanks(t_list **a, t_list **b, int size);
#endif
