/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenouat <sbenouat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 07:39:51 by sbenouat          #+#    #+#             */
/*   Updated: 2023/08/15 07:48:13 by sbenouat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Shift up all elements of linked list a by 1
void	rotate(t_list **stack_a)
{
	t_list	*tmp;
	t_list	*last;

	if (*stack_a && (*stack_a)->next)
	{
		tmp = *stack_a;
		last = ft_lstlast(*stack_a);
		*stack_a = (*stack_a)->next;
		tmp->next = NULL;
		last->next = tmp;
	}
}

// ra and rb at the same time.
void	rotate_both(t_list **stack_a, t_list **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
}
