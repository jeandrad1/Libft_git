/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeandrad <jeandrad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 16:47:58 by jeandrad          #+#    #+#             */
/*   Updated: 2023/12/19 18:36:51 by jeandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	ok_lst;
	t_list	*n_node;

	while (lst)
	{
		ok_lst = n_node;
		n_node = ft_lstnew(f(lst->content));
		lst = lst -> next;
	}
	return (ok_lst);
}
