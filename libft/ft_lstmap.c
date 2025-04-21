/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 15:58:21 by thevaris          #+#    #+#             */
/*   Updated: 2025/04/21 19:38:20 by thevaris         ###   ########.fr       */
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
/*
void *double_value(void *content)
{
	int num = atoi((char *)content);
    num *= 2;

    char *result = malloc(12);
    if (!result)
        return NULL;

    sprintf(result, "%d", num); 
    return result;
}

void delete_content(void *content)
{
	free(content);
}

#include <stdio.h>
int main()
{
	t_list *head = ft_lstnew(ft_strdup("2"));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("4")));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("6")));
	
	t_list *new_list = ft_lstmap(head, double_value, delete_content);
	
	t_list *tmp = new_list;
	while (tmp)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}

	ft_lstclear(&head, delete_content);
    ft_lstclear(&new_list, delete_content);
	return 0;
}*/