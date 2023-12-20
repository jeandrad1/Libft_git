/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeandrad <jeandrad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 16:47:58 by jeandrad          #+#    #+#             */
/*   Updated: 2023/12/20 12:59:19 by jeandrad         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	ok_lst;
	t_list	*n_node;

	if (!lst || !f)
		return (NULL);
	ok_lst = NULL;
	while (lst)
	{
		n_node = ft_lstnew(f(lst->content));
		if (!n_node)
		{
			ft_lstclear(&ok_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&ok_lst, n_node);
		lst = lst->next;
	}
	return (ok_lst);
}
