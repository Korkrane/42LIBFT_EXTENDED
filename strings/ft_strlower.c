/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlower.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 10:51:06 by bahaas            #+#    #+#             */
/*   Updated: 2022/06/18 16:43:24 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strlower(char *str)
{
    char *lower = ft_strdup(str);

    for(unsigned long i = 0; i < strlen(lower);i++)
        lower[i] = ft_tolower(lower[i]);
    return lower;
}
