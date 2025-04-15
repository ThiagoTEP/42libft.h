/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 15:29:22 by thevaris          #+#    #+#             */
/*   Updated: 2025/04/13 18:47:43 by thevaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int num)
{
	int	value;

	if (num == 0)
		return (1);
	value = 0;
	if (num < 0)
	{
		value += 1;
		num *= (-1);
	}
	while (num != 0)
	{
		num = num / 10;
		value++;
	}
	return (value);
}

char	*is_negative(char *str, int n, int malloc_size)
{
	n *= (-1);
	str[0] = '-';
	while (malloc_size > 1)
	{
		malloc_size--;
		str[malloc_size] = (n % 10) + 48;
		n /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	size_t	malloc_size;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	malloc_size = ft_intlen(n);
	str = malloc(sizeof(char) * (malloc_size + 1));
	if (!str)
		return (NULL);
	str[malloc_size] = '\0';
	if (n < 0)
		str = is_negative(str, n, malloc_size);
	else
	{
		while (malloc_size > 0)
		{
			str[malloc_size - 1] = (n % 10) + 48;
			n /= 10;
			malloc_size--;
		}
	}
	return (str);
}

/*
void print_str_or_null(char *str) {
    if (str)
        printf("%s\n", str);
    else
        printf("(null)\n");
}

int main(void)
{
	print_str_or_null(ft_itoa(42));
	return 0;
}*/