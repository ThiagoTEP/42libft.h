/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 17:07:21 by thevaris          #+#    #+#             */
/*   Updated: 2025/04/09 17:18:20 by thevaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (c >= 65 && c <= 90 || c >= 97 && c <= 122 || c >= 48 && c <= 57);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%i\n", ft_isalnum('\n'));
	printf("%i\n", ft_isalnum('5'));
	printf("%i\n", ft_isalnum('a'));
	printf("%i\n", ft_isalnum(5));
	printf("%i\n", ft_isalnum('Z'));
	return(0);
}*/