/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 15:07:14 by bahaas            #+#    #+#             */
/*   Updated: 2020/10/03 15:07:26 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list		*list;

	if (!alst || !*alst)
	{
		*alst = new;
	}
	else
	{
		list = ft_lstlast(*alst);
		list->next = new;
	}
}
