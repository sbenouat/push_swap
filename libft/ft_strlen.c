/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenouat <sbenouat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:33:46 by sbenouat          #+#    #+#             */
/*   Updated: 2022/11/08 15:49:24 by sbenouat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	rslt;

	rslt = 0;
	while (*s)
	{
		rslt++;
		s++;
	}
	return (rslt);
}