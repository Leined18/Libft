/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 19:42:19 by danpalac          #+#    #+#             */
/*   Updated: 2024/10/16 10:08:34 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (i);
	if (!s[i])
		return (i);
	while (s[i] != '\0')
		i++;
	return (i);
}
/*
int	main(void)
{
	char str[] = "Hello, world";

	printf("%zu", ft_strlen(NULL));
	return (0);
}*/
