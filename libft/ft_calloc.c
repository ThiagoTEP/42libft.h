/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 15:28:59 by thevaris          #+#    #+#             */
/*   Updated: 2025/04/13 18:46:02 by thevaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*call;
	size_t	i;

	call = malloc(size * nmemb);
	if (!call)
		return (NULL);
	i = 0;
	while (i < size * nmemb)
	{
		call[i] = '\0';
		i++;
	}
	return (call);
}

/*
int	main(void)
{
	int	*array;
	size_t	n = 5;
	size_t	i;

	array = (int *)ft_calloc(n, sizeof(int));
	
	// Verifica se todos os elementos estão zerados
	i = 0;
	while(i < n)
	{
		printf("array[%zu] = %d\n", i, array[i]);
		i++;
	}

	free(array);
	return (0);
}*/