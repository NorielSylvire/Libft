/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printchsdixXup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhongu <fhongu@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 13:44:17 by fhongu            #+#    #+#             */
/*   Updated: 2024/04/15 20:12:19 by fhongu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	printchar(int *res, int ch)
{
	write(1, &ch, 1);
	*res += 1;
}

void	printstr(int *res, char *str)
{
	int	len;

	if (!str)
		str = "(null)";
	len = ft_strlen(str);
	write(1, str, len);
	*res += len;
}

void	printnum(int *res, int num)
{
	char	*num2str;

	num2str = ft_itoa(num);
	printstr(res, num2str);
	ft_free((void **) &num2str);
}

void	printbase(int *res, unsigned int num, int base, int uppercase)
{
	char			*str;
	unsigned int	nbr;
	unsigned short	ndigits;

	nbr = num;
	ndigits = 1;
	while (nbr >= (unsigned int) base)
	{
		nbr /= (unsigned int) base;
		ndigits += 1;
	}
	str = ft_calloc(ndigits + 1, sizeof (char));
	while (ndigits > 0)
	{
		str[--ndigits] = digit(num, base);
		num /= base;
	}
	if (uppercase)
		str = capitalize(str);
	printstr(res, str);
	ft_free((void **) &str);
}

void	printptr(int *res, void *ptr)
{
	size_t	ptr2num;

	write(1, "0x", 2);
	*res += 2;
	ptr2num = (size_t) ptr;
	recursive_print_digit(res, ptr2num);
}
