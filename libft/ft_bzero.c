/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:12:54 by thevaris          #+#    #+#             */
/*   Updated: 2025/04/13 18:30:34 by thevaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*j;

	j = s;
	i = 0;
	while (i < n)
	{
		j[i] = '\0';
		i++;
	}
}
/*
#include <stdio.h>
int main(void)
{
	char y[] = "abcdefghij";

	printf("%s\n", y);

	ft_bzero(y, 4);

	printf("%s\n", y);

	int i;

	i = 0;
	while(i < 11)
	{
		printf("%c", y[i]);
		i++;
	};
	
	return (0);
}*/