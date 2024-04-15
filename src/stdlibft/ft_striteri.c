/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhongu <fhongu@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 18:34:15 by fhongu            #+#    #+#             */
/*   Updated: 2024/04/15 20:24:28 by fhongu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	char			*scopy;
	unsigned int	i;

	scopy = s;
	i = 0;
	while (*s)
	{
		(*f)(i++, &*s++);
	}
	return (scopy);
}
