/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_preppend.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhongu <fhongu@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 22:57:57 by fhongu            #+#    #+#             */
/*   Updated: 2023/10/18 19:39:03 by fhongu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_preppend(const char *str, const char *pre)
{
	size_t		strlen;
	char		*result;
	const char	*strcopy;

	strcopy = str;
	strlen = ft_strlen(str) + ft_strlen(pre);
	result = ft_calloc(strlen + 1, sizeof (char));
	while (*pre)
		*result++ = *pre++;
	while (*strcopy)
		*result++ = *strcopy++;
	ft_free((void **) &str);
	return (result - strlen);
}
