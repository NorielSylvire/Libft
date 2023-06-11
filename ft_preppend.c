/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_preppend.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhongu <fhongu@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 22:57:57 by fhongu            #+#    #+#             */
/*   Updated: 2023/06/11 19:09:52 by fhongu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_preppend(const char *str, const char *pre)
{
	size_t	len;
	char	*result;

	len = ft_strlen(str);
	len += ft_strlen(pre);
	result = ft_calloc(len + 1, sizeof (char));
	while (*pre)
		*result++ = *pre++;
	while (*str)
		*result++ = *str++;
	return (result - len);
}
