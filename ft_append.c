/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_append.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhongu <fhongu@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 22:18:19 by fhongu            #+#    #+#             */
/*   Updated: 2023/06/11 19:09:57 by fhongu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_append(const char *str, const char *apd)
{
	size_t	len;
	char	*result;

	len = ft_strlen(str);
	len += ft_strlen(apd);
	result = ft_calloc(len + 1, sizeof (char));
	while (*str)
		*result++ = *str++;
	while (*apd)
		*result++ = *apd++;
	return (result - len);
}
