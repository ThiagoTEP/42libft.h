/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 17:44:29 by thevaris          #+#    #+#             */
/*   Updated: 2025/04/09 18:01:45 by thevaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%i\n", ft_isascii('\n'));
	printf("%i\n", ft_isascii('&'));
	printf("%i\n", ft_isascii(' '));
	printf("%i\n", ft_isascii('c'));
	printf("%i\n", ft_isascii('5'));
	printf("%i\n", ft_isascii('%'));
	printf("%i\n", ft_isascii(-1));

	return(0);
}*/