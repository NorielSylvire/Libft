/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhongu <fhongu@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 13:28:38 by fhongu            #+#    #+#             */
/*   Updated: 2024/04/15 19:55:22 by fhongu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "libft.h"

int		ft_printf(const char *format, ...);
void	printchar(int *res, int ch);
void	printstr(int *res, char *str);
void	printnum(int *res, int num);
void	printbase(int *res, unsigned int num, int base, int uppercase);
void	printptr(int *res, void *ptr);
void	recursive_print_digit(int *res, size_t num);
char	*capitalize(char *str);
char	digit(unsigned int nbr, int base);
char	change_letter(char ch);

#endif
