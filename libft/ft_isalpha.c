/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 19:46:54 by thevaris          #+#    #+#             */
/*   Updated: 2025/04/13 18:31:18 by thevaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

/*
#include <stdio.h>
int main(void)
{	
	char x = 'Z';
	
	printf("%i", ft_isalpha(x));
	
	
	return (0);
}*/
