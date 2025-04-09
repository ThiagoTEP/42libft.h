/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:42:18 by thevaris          #+#    #+#             */
/*   Updated: 2025/04/09 17:14:38 by thevaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%i\n", ft_isdigit('5'));
	printf("%i\n", ft_isdigit('a'));
	printf("%i\n", ft_isdigit('\0'));
	
	return (0);
}*/