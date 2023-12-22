/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeandrad <jeandrad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 09:04:20 by jeandrad          #+#    #+#             */
/*   Updated: 2023/12/22 13:55:14 by jeandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*father;
	t_list	*new;

	father = ft_lstnew(NULL);
	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		if (!(new))
		{
			ft_lstclear(&father, del);
			free(father);
			return (NULL);
		}
		ft_lstadd_back(&father, new);
		lst = lst->next;
	}
	return (father);
}
