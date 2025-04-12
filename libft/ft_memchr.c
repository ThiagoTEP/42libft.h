/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 15:07:46 by thevaris          #+#    #+#             */
/*   Updated: 2025/04/11 15:53:16 by thevaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*src;
	size_t		i;

	src = s;
	i = 0;
	while (i < n)
	{
		if (src[i] == (char)c)
			return ((char *)&src[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
int main(void)
{
	char *x = "testar string";
	char *result = ft_memchr(x, 'i', 20);
	
	printf("%c\n", *result);
	printf("%s\n", result);
	return 0;
}*/