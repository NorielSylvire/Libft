/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trgb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhongu <fhongu@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 21:10:40 by fhongu            #+#    #+#             */
/*   Updated: 2024/06/07 22:35:51 by fhongu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_trgb(int t, int r, int g, int b)
{
	return ((t % 256) << 24 | (r % 256) << 16 | (g % 256) << 8 | (b % 256));
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
