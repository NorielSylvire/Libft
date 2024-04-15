/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhongu <fhongu@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 13:10:58 by fhongu            #+#    #+#             */
/*   Updated: 2024/04/15 20:12:01 by fhongu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static void	parse_conv(char coversion, int *res, va_list args);

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		ret;

	va_start(args, format);
	ret = 0;
	while (*format)
	{
		if (*format == '%' && *(format + 1) != '\0')
		{
			parse_conv(*(format + 1), &ret, args);
			format++;
		}
		else if (!(*format == '%' && *(format + 1) == '\0'))
		{
			write(1, format, 1);
			ret++;
		}
		format++;
	}
	va_end(args);
	return (ret);
}

static void	parse_conv(char conversion, int *res, va_list args)
{
	if (conversion == 'c')
		printchar(res, va_arg(args, int));
	else if (conversion == '%')
		printchar(res, '%');
	else if (conversion == 's')
		printstr(res, va_arg(args, char *));
	else if (conversion == 'i' || conversion == 'd')
		printnum(res, va_arg(args, int));
	else if (conversion == 'x' || conversion == 'X')
		printbase(res, va_arg(args, unsigned int), 16, conversion == 'X');
	else if (conversion == 'u')
		printbase(res, va_arg(args, unsigned int), 10, 0);
	else if (conversion == 'p')
		printptr(res, va_arg(args, void *));
}
