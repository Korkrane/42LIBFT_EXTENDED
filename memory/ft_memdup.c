/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 10:15:25 by bahaas            #+#    #+#             */
/*   Updated: 2020/09/24 10:15:43 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memdup(const void *src, size_t size)
{
	void	*dest;

	dest = ft_memalloc(size);
	if (!dest)
		return (NULL);
	return (ft_memcpy(dest, src, size));
}
