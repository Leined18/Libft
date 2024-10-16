/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_2d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 22:42:33 by danpalac          #+#    #+#             */
/*   Updated: 2024/10/16 09:27:52 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	free_2d(void *arr)
{
	size_t	i;
	void	**array;

	array = (void **)arr;
	i = 0;
	if (array)
	{
		while (array[i])
		{
			free_null(array[i]);
			array[i] = NULL;
			i++;
		}
		free_null(array);
	}
}
