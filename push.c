/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenouat <sbenouat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 07:27:49 by sbenouat          #+#    #+#             */
/*   Updated: 2023/08/15 07:48:24 by sbenouat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Take the first element of linked list b and put it at the top of linked list a
void	push(t_list **a, t_list **b)
{
	t_list	*tmp;

	if (!*b)
		return ;
	if ((*a)->content == NULL)
	{
		*a = ft_lstnew((*b)->content);
		*b = (*b)->next;
	}
	else
	{
		tmp = *b;
		*b = (*b)->next;
		tmp->next = *a;
		*a = tmp;
	}
}
