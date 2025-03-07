/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:39:12 by danpalac          #+#    #+#             */
/*   Updated: 2025/03/07 10:56:38 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	check(void *content)
{
	if (content)
		printf("Content: %p\n", content);
	else
		printf("Content: NULL\n");
}

int	main(void)
{
	char	**array;
	t_list	*list;

	array = ft_split("hola que tal", ' ');
	(void)array;
	list = ft_lstnew(array);
	ft_hold_mem(1, list);
	return (0);
}
