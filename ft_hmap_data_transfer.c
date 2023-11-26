/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hmap_data_transfer.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhongu <fhongu@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 13:01:04 by fhongu            #+#    #+#             */
/*   Updated: 2023/11/26 13:13:32 by fhongu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_hmap_add(t_hashmap *hmap, void *key, void *value, size_t len)
{
	t_ushort	hash;
	t_key_value	*keyval;
	t_list		*element;

	if (!ft_hmap_get(hmap, key))
	{
		hash = ft_hash((unsigned char *) key, len) % hmap->size;
		if (!hmap->map[hash])
			hmap->map[hash] = ft_lstnew(NULL);
		keyval = malloc(sizeof (t_key_value));
		if (!keyval)
			return (ft_hmap_free(hmap));
		keyval->key = key;
		keyval->value = value;
		element = malloc (sizeof (t_list));
		if (!element)
			return (ft_hmap_free(hmap));
		element->content = keyval;
		element->next = NULL;
		ft_lstadd_back(&hmap->map[hash], element);
	}
	else
		ft_hmap_edit(hmap, key, value, len);
}
