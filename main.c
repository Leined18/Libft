/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:39:12 by danpalac          #+#    #+#             */
/*   Updated: 2024/11/07 14:24:34 by danpalac         ###   ########.fr       */
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

	array = malloc(sizeof(char *) * 4);
	array[0] = malloc(10);
	array[1] = malloc(20);
	array[2] = malloc(30);
	array[3] = NULL;
	ft_hold_mem(1, &list, &array);
	ft_lstadd_2d(&list, array);
	ft_lstclear(&list, free_null);
	return (0);
}
