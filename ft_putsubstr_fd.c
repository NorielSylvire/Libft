/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putsubstr_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhongu <fhongu@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 22:37:44 by fhongu            #+#    #+#             */
/*   Updated: 2023/06/14 22:54:08 by fhongu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putsubstr_fd(const char *str, size_t start, size_t end, int fd)
{
	size_t	i;

	i = start;
	while (i <= end)
		ft_putchar_fd(str[i++], fd);
	return (end - start + 1);
}
