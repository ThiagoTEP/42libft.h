/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 16:21:06 by thevaris          #+#    #+#             */
/*   Updated: 2025/04/13 18:44:07 by thevaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
/*
#include <stdio.h>
int main(void)
{	
	int x = 'C';
	
	printf("%c\n", ft_toupper(x));
	printf("%c\n", ft_toupper('c'));
	printf("%c\n", ft_toupper('1'));
	printf("%c\n", ft_toupper(32));
	printf("%c\n", ft_toupper(97));
	
	return 0;
}*/