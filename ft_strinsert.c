/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strinsert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhongu <fhongu@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 20:51:21 by fhongu            #+#    #+#             */
/*   Updated: 2023/10/04 21:01:02 by fhongu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strinsert(const char *str, const char *ins, size_t pos)
{
	char	*ret;

	ret = ft_substr(str, 0, pos - 1);
	if (!ret)
		return (NULL);
	ret = ft_append(ret, ins);
	if (!ret)
		return (NULL);
	ret = ft_append(ret, str + pos);
	return (ret);
}
