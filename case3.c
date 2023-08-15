/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenouat <sbenouat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 08:03:55 by sbenouat          #+#    #+#             */
/*   Updated: 2023/08/15 08:24:36 by sbenouat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort3_b(t_list **a);

void	sort3(t_list **a)
{
	if (is_sorted(*a))
		return ;
	if (ft_atoi((*a)->content) < ft_atoi((*a)->next->content))
	{
		if (ft_atoi((*a)->content) > ft_atoi((*a)->next->next->content))
		{
			ft_printf("rra\n");
			reverse_rotate(a);
		}
		else
		{
			ft_printf("rra\nsa\n");
			reverse_rotate(a);
			swap(*a);
		}
	}
	else
		sort3_b(a);
	return ;
}

void	sort3_b(t_list **a)
{
	if (ft_atoi((*a)->next->content) > ft_atoi((*a)->next->next->content))
	{
		ft_printf("sa\nrra\n");
		swap(*a);
		reverse_rotate(a);
	}
	else
	{
		ft_printf("ra\n");
		rotate(a);
	}
}
