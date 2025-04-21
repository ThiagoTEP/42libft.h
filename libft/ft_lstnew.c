/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 15:29:28 by thevaris          #+#    #+#             */
/*   Updated: 2025/04/21 16:01:39 by thevaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nnode;

	nnode = malloc(sizeof(t_list));
	if (!nnode)
		return (NULL);
	nnode->content = content;
	nnode->next = NULL;
	return (nnode);
}
/*
#include <stdio.h>
int main (void)
{
	char *str = "Hello, World!";

	t_list *node = ft_lstnew(str);

	printf("%s\n", (char *)node->content);
	printf("%p\n", (void *)node->next);
	
	return 0;
}*/