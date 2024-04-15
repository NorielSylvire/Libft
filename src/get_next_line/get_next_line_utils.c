/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhongu <fhongu@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 17:34:25 by fhongu            #+#    #+#             */
/*   Updated: 2024/04/15 22:04:13 by fhongu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/get_next_line.h"

char	*ft_ptr_strnjoin(char const *s1, char const *s2, int chars_read)
{
	size_t	total_size;
	char	*ret;

	if (!s1 || !s2 || chars_read < 0)
		return (NULL);
	total_size = ft_strlen(s2);
	if (total_size > (size_t) chars_read)
		total_size = chars_read;
	total_size += ft_strlen(s1) + 1;
	ret = ft_calloc(total_size, sizeof (char));
	if (!ret)
		return (NULL);
	while (*s1)
		*ret++ = *s1++;
	while (*s2 && chars_read > 0)
	{
		*ret++ = *s2++;
		chars_read--;
	}
	return (ret - total_size + 1);
}
