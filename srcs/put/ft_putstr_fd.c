/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 09:02:49 by danpalac          #+#    #+#             */
/*   Updated: 2024/10/05 12:17:12 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
    int    i;
    
    i = 0;
	while (s[i])
		ft_putchar_fd(s[i++], fd);
}
/*
int main() {
    // Write C code here
    char c[] = "Piano";
    int i = 0;

    while (i < sizeof(int))
    {
        ft_putstr_fd(c,1);
        ft_putchar_fd(' ', 1);
        i++;
    }

    return 0;
}*/
