/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:39:12 by danpalac          #+#    #+#             */
/*   Updated: 2024/11/15 11:57:29 by danpalac         ###   ########.fr       */
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

	array = ft_split("hola que tal", ' ');
    (void)array;
    t_list *list = ft_lstnew(array);
	ft_hold_mem(1, list);
	return (0);
}
