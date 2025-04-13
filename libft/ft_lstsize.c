/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 15:39:36 by thevaris          #+#    #+#             */
/*   Updated: 2025/04/13 19:02:13 by thevaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	size;

	if (lst == NULL)
		return (0);
	size = 1;
	while (lst->next != NULL)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}
