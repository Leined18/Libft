/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_2d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel <daniel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 22:42:33 by danpalac          #+#    #+#             */
/*   Updated: 2025/06/03 21:59:12 by daniel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	freec_2d(void *arr)
{
	size_t	i;
	void	**array;

	array = (void **)arr;
	i = 0;
	if (array)
	{
		while (array[i])
		{
			freec(array[i]);
			array[i] = NULL;
			i++;
		}
		freec(array);
	}
}
