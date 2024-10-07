/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 09:02:49 by danpalac          #+#    #+#             */
/*   Updated: 2024/10/07 16:09:49 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
		ft_putchar_fd(*s++, fd);
}
/*
int	main(void) {
	// Write C code here
	char c[] = "Piano";
	int i = 0;

	while (i < sizeof(int))
	{
		ft_putstr_fd(c,1);
		ft_putchar_fd(' ', 1);
		i++;
	}

	return (0);
}*/
