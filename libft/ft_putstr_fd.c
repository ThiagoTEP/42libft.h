/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thevaris <thevaris@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 15:29:59 by thevaris          #+#    #+#             */
/*   Updated: 2025/04/21 12:28:16 by thevaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if ((s != NULL) && (fd >= 0))
	{
		write(fd, s, ft_strlen(s));
	}
}

/*
int main(void)
{
	ft_putstr_fd("libft\n", 1);
	return 0;
}*/
