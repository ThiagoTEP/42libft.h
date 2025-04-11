/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 16:49:43 by thevaris          #+#    #+#             */
/*   Updated: 2025/04/11 14:38:23 by thevaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = (ft_strlen(s));
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (0);
}

/*
#include <stdio.h>
int main(void)
{
	char *x = "testar string";
	char *result = ft_strrchr(x, 'a');

	printf("%c\n", result);
	printf("%s\n", result);
	
	return 0;
}*/