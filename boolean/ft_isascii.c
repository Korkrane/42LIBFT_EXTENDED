/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 11:55:23 by bahaas            #+#    #+#             */
/*   Updated: 2022/06/20 00:51:08 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief check if a character is in the basic ascii table
 *
 * @param ch
 * @return bool
 */
bool		ft_isascii(int ch)
{
	return (ch >= 0 && ch <= 127) ? true : false;
}
