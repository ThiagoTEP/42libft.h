/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 15:30:19 by thevaris          #+#    #+#             */
/*   Updated: 2025/04/13 18:49:12 by thevaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*
#include <stdio.h>
void increment_char(unsigned int i, char *c)
{
    *c += 1; 
}

int main(void)
{
    char str[] = "libft test";

    ft_striteri(str, increment_char);

    printf("%s\n", str);
    return 0;
}*/
