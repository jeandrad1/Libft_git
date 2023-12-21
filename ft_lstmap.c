/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeandrad <jeandrad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 09:04:20 by jeandrad          #+#    #+#             */
/*   Updated: 2023/12/21 13:56:45 by jeandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*father;
	t_list	*new;

	if (!f || !del)
		return (NULL);
	father = NULL;
	while (lst)
	{
		if (!(new = ft_lstnew((*f)(lst->content))))
		{
			while (father)
			{
				new = father->next;
				(*del)(father->content);
				free(father);
				father = new;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&father, new);
		lst = lst->next;
	}
	return (father);
}
