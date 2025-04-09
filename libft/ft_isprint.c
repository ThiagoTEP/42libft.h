/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 18:02:54 by thevaris          #+#    #+#             */
/*   Updated: 2025/04/09 18:12:22 by thevaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%i\n", ft_isprint('\n'));
	printf("%i\n", ft_isprint(' '));
	printf("%i\n", ft_isprint('a'));
	printf("%i\n", ft_isprint('5'));
	return (0);
}*/