/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenouat <sbenouat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 05:22:41 by sbenouat          #+#    #+#             */
/*   Updated: 2023/08/15 07:52:03 by sbenouat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "printf/ft_printf.h"
# include "printf/libft/libft.h"

t_list	*init_stack(int ac, char **av);
int		check_args(int ac, char **av);
int		check_duplicate(int ac, char **av);
void	swap(t_list *a);
void	swap_both(t_list *a, t_list *b);
void	push(t_list **a, t_list **b);
void	rotate(t_list **stack_a);
void	rotate_both(t_list **stack_a, t_list **stack_b);
void	reverse_rotate(t_list **a);
void	reverse_rotate_both(t_list **a, t_list **b);

#endif
