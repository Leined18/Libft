/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 17:36:40 by danpalac          #+#    #+#             */
/*   Updated: 2024/10/30 10:38:07 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memdel(size_t ac, t_del_func del_func, ...)
{
	va_list ap;
	void *ptr;

	if (!del_func)
		del_func = free_null;
	va_start(ap, del_func);
	while (ac--)
	{
		ptr = va_arg(ap, void *);
		if (ptr)
			del_func(&ptr);
	}
	va_end(ap);
}
