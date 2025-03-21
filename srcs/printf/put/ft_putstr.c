/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:16:26 by danpalac          #+#    #+#             */
/*   Updated: 2025/03/21 10:49:40 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char const *s)
{
	int	result;
	int len;

	result = 0;
	len = 0;
	if (!s)
		return (write(1, "(null)", 6));
	while (s[len])
		result += ft_putchar(s[len++]);
	return (result);
}
/*
int main()
{
	ft_putstr("adios");
	return 0;
}*/
