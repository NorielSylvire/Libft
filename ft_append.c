/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_append.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhongu <fhongu@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 22:18:19 by fhongu            #+#    #+#             */
/*   Updated: 2023/10/15 22:07:52 by fhongu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_append(const char *str, const char *apd)
{
	size_t		strlen;
	size_t		total_len;
	char		*result;
	const char	*strcopy;

	strlen = ft_strlen(str);
	total_len = strlen + ft_strlen(apd);
	result = ft_calloc(total_len + 1, sizeof (char));
	while (*str)
		*result++ = *strcopy++;
	while (*apd)
		*result++ = *apd++;
	ft_free((void **) str);
	return (result - total_len);
}
