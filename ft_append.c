/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_append.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhongu <fhongu@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 22:18:19 by fhongu            #+#    #+#             */
/*   Updated: 2023/10/18 19:38:48 by fhongu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_append(const char *str, const char *apd)
{
	size_t		strlen;
	char		*result;
	const char	*strcopy;

	strcopy = str;
	strlen = ft_strlen(str) + ft_strlen(apd);
	result = ft_calloc(strlen + 1, sizeof (char));
	while (*strcopy)
		*result++ = *strcopy++;
	while (*apd)
		*result++ = *apd++;
	ft_free((void **) &str);
	return (result - strlen);
}
