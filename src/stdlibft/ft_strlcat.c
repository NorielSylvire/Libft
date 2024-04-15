/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhongu <fhongu@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 21:43:55 by fhongu            #+#    #+#             */
/*   Updated: 2024/04/15 20:24:36 by fhongu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;

	i = 0;
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	dst += dlen;
	if (dstsize == 0 || dlen >= dstsize)
		return (dstsize + slen);
	while (*src && i++ < dstsize - dlen - 1)
		*dst++ = *src++;
	*dst = '\0';
	return (dlen + slen);
}
