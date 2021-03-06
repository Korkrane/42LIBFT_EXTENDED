/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 15:30:51 by bahaas            #+#    #+#             */
/*   Updated: 2020/10/03 15:31:01 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list		*ptr_list;
	t_list		*ptr_next;

	ptr_list = *lst;
	while (ptr_list)
	{
		ptr_next = ptr_list->next;
		(*del)(ptr_list->content);
		free(ptr_list);
		ptr_list = ptr_next;
	}
	*lst = NULL;
}
