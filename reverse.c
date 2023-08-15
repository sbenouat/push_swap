/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenouat <sbenouat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 07:49:42 by sbenouat          #+#    #+#             */
/*   Updated: 2023/08/15 07:51:07 by sbenouat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Shift down all elements of linked list a by 1. The last element becomes the first one.
void	reverse_rotate(t_list **a)
{
	t_list	*tmp;
	t_list	*last;

	if (!*a || !(*a)->next)
		return ;
	tmp = *a;
	while (tmp->next)
	{
		last = tmp;
		tmp = tmp->next;
	}
	last->next = NULL;
	tmp->next = *a;
	*a = tmp;
}

// rra and rrb at the same time.
void	reverse_both(t_list **a, t_list **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
}
