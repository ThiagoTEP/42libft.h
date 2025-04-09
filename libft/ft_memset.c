/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 18:28:23 by thevaris          #+#    #+#             */
/*   Updated: 2025/04/09 19:39:13 by thevaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*j;

	j = s;
	i = 0;
	while (i < n)
	{
		j[i] = c;
		i++;
	}
	return (j);
}
/*
#include <stdio.h>
int main(void)
{
	int x = '0';
	char y[] = "abcdefghij";

	printf("%s\n", y);
	printf("%s\n", (char *)ft_memset(y, x, 4));
	return (0);
}*/