/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base_format.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhongu <fhongu@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 14:14:29 by fhongu            #+#    #+#             */
/*   Updated: 2024/04/15 20:12:26 by fhongu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

char	*capitalize(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		str[i] = change_letter(str[i]);
		i++;
	}
	return (str);
}

char	digit(unsigned int nbr, int base)
{
	char			*digits;
	unsigned int	remainder;

	digits = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	remainder = nbr % base;
	if (remainder <= 9)
		return (remainder + '0');
	else
		return (digits[remainder - 10]);
}

char	change_letter(char ch)
{
	if (ch >= '0' && ch <= '9')
		return (ch);
	if (ch >= 'A' && ch <= 'Z')
		ch += 'a' - 'A';
	else
		ch -= 'a' - 'A';
	return (ch);
}

void	recursive_print_digit(int *res, size_t num)
{
	char	dgt;

	if (num >= 16)
		recursive_print_digit(res, num / 16);
	dgt = digit(num % 16, 16);
	write(1, &dgt, 1);
	*res += 1;
}
