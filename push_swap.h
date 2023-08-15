/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenouat <sbenouat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 05:22:41 by sbenouat          #+#    #+#             */
/*   Updated: 2023/08/15 06:23:07 by sbenouat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "printf/ft_printf.h"
# include "printf/libft/libft.h"

typedef struct Stack
{
	t_list			*top;
}	Stack;

int	check_args(int ac, char **av);
int	check_duplicate(int ac, char **av);

#endif