/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenouat <sbenouat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 07:19:30 by sbenouat          #+#    #+#             */
/*   Updated: 2023/08/15 07:25:52 by sbenouat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Swap the first 2 elements at the beginning of a linked list
void	swap(t_list *a)
{
	char	*tmp;

	if (a && a->next)
	{
		tmp = (char *)a->content;
		a->content = a->next->content;
		a->next->content = tmp;
	}
}

// Swap the first 2 elements of 2 linked lists
void	ss(t_list *a, t_list *b)
{
	swap(a);
	swap(b);
}
