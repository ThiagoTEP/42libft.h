/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 15:58:21 by thevaris          #+#    #+#             */
/*   Updated: 2025/04/19 13:02:20 by thevaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap_node(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nnode;
	void	*content;

	content = f(lst->content);
	if (!content)
		return (NULL);
	nnode = ft_lstnew(content);
	if (!nnode)
	{
		del(content);
		return (NULL);
	}
	return (nnode);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlist;
	t_list	*nnode;

	if (!lst || !f || !del)
		return (NULL);
	nlist = NULL;
	while (lst)
	{
		nnode = ft_lstmap_node(lst, f, del);
		if (!nnode)
		{
			ft_lstclear(&nlist, del);
			return (NULL);
		}
		ft_lstadd_back(&nlist, nnode);
		lst = lst->next;
	}
	return (nlist);
}
