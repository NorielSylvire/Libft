/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhongu <fhongu@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 20:11:43 by fhongu            #+#    #+#             */
/*   Updated: 2024/04/14 22:00:05 by fhongu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		sign;
	long	res;

	sign = 0;
	res = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = 1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		res += *str - '0';
		if (ft_isdigit(*(str + 1)))
			res *= 10;
		str++;
	}
	if (sign)
		res *= -1;
	return ((int) res);
}
