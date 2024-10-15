/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 17:36:40 by danpalac          #+#    #+#             */
/*   Updated: 2024/10/15 22:41:58 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memdel(int num_args, ...)
{
	va_list	ap;
	void	**ptr;

	va_start(ap, num_args);
	while (num_args > 0)
	{
		ptr = va_arg(ap, void *);
		if (ptr)
		{
			free(ptr);
			ptr = NULL;
		}
		num_args--;
	}
	va_end(ap);
}
