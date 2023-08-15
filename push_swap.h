/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenouat <sbenouat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 05:22:41 by sbenouat          #+#    #+#             */
/*   Updated: 2023/08/15 07:29:43 by sbenouat         ###   ########.fr       */
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
void	ss(t_list *a, t_list *b);
void	push(t_list **a, t_list **b);

#endif
