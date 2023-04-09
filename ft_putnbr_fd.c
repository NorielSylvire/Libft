/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhongu <fhongu@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 19:01:26 by fhongu            #+#    #+#             */
/*   Updated: 2023/04/01 19:53:25 by fhongu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	recurse_nbr(long n, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;

	nbr = (long) n;
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr *= -1;
	}
	recurse_nbr(nbr, fd);
}

void	recurse_nbr(long n, int fd)
{
	char	c;

	if (n > 9)
	{
		recurse_nbr(n / 10, fd);
		c = n % 10 + '0';
		ft_putchar_fd(c, fd);
	}
	else
	{
		c = n + '0';
		ft_putchar_fd(c, fd);
	}
}
