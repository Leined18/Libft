/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:39:12 by danpalac          #+#    #+#             */
/*   Updated: 2024/11/08 14:06:33 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_arraylen(char **array)
{
	int	counter;

	counter = 0;
	while (array[counter])
		counter++;
	return (counter);
}

int	main(void)
{
	char	**array;
	t_list	*list;

	array = malloc(sizeof(char *) * 3);
	array[0] = malloc(10);
	array[1] = malloc(20);
	array[2] = NULL;
	ft_hold_mem(3, &list, NULL, &array[0], &array[1]);
	ft_hold_mem(1, &list, &array);
	ft_lstclear(&list, free);
	return (0);
}
