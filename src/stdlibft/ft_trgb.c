/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trgb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhongu <fhongu@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 21:10:40 by fhongu            #+#    #+#             */
/*   Updated: 2024/05/22 21:14:32 by fhongu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_trgb(int t, int r, int g, int b)
{
	return (t << 24 | r << 16 | g << 8 | b);
}

int	ft_get_t(int trgb)
{
	return ((trgb >> 24) & 0xFF);
}

int	ft_get_r(int trgb)
{
	return ((trgb >> 16) & 0xFF);
}

int	ft_get_g(int trgb)
{
	return ((trgb >> 8) & 0xFF);
}

int	ft_get_b(int trgb)
{
	return (trgb & 0xFF);
}
