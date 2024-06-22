/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_count.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhongu <fhongu@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 00:11:21 by fhongu            #+#    #+#             */
/*   Updated: 2024/06/23 00:13:39 by fhongu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_char_count(char *str, int c)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (*str % 128 == c)
			count++;
		str++;
	}
	return (count);
}
