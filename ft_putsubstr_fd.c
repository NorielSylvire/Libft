/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putsubstr_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhongu <fhongu@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 22:37:44 by fhongu            #+#    #+#             */
/*   Updated: 2023/10/04 20:05:23 by fhongu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putsubstr_fd(const char *str, size_t start, size_t end, int fd)
{
	char	*ret;

	ret = ft_substr(str, start, end - start - 1);
	if (!ret)
		return (0);
	ft_putstr_fd(ret, fd);
	return ((int) ft_strlen(ret));
}
