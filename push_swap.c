/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenouat <sbenouat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 05:51:18 by sbenouat          #+#    #+#             */
/*   Updated: 2023/08/15 08:25:27 by sbenouat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void print_linked_list(t_list *head)
{
    t_list *current = head;
    while (current)
    {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }
}

// Check if a linked list a is sorted
int is_sorted(t_list *head)
{
	t_list *current = head;
	while (current->next)
	{
		if (ft_atoi((char *)current->content) > ft_atoi((char *)current->next->content))
			return (0);
		current = current->next;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (argc < 2)
		return (0);
	if (check_args(argc, argv) == 1)
	{
		ft_printf("Error\n");
		return (0);
	}
	stack_a = (t_list *)malloc(sizeof(t_list));
	stack_b = (t_list *)malloc(sizeof(t_list));
	if (!stack_a || !stack_b)
		return (0);
	stack_a = init_stack(argc, argv);
	stack_b = ft_lstnew(NULL);
	if (argc == 4)
		sort3(&stack_a);
	return (0);
}
