/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_2d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 22:42:33 by danpalac          #+#    #+#             */
/*   Updated: 2024/10/30 10:44:12 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	free_2d(char **arr)
{
	size_t	i;
	void 	**array;

	i = 0;
	array = (void **)arr;
	if (array)
	{
		while ((array)[i])
		{
			free_null(&array[i]);
			i++;
		}
		free_null((void **)&array);
	}
}
