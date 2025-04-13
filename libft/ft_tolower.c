/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 16:44:26 by thevaris          #+#    #+#             */
/*   Updated: 2025/04/13 18:43:11 by thevaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}

/*
#include <stdio.h>
int main(void)
{	
	printf("%c\n", ft_tolower('c'));
	printf("%c\n", ft_tolower('C'));
	printf("%c\n", ft_tolower('A'));
	printf("%c\n", ft_tolower(65));
	printf("%c\n", ft_tolower('2'));
	
	return 0;
}*/