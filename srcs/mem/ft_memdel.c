/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 17:36:40 by danpalac          #+#    #+#             */
/*   Updated: 2024/10/30 14:29:00 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	is_array(void ***ptr, t_del_func del_func, int i)
{
	void	**tptr;

	i = 0;
	if (!*ptr || !ptr || !del_func || i < 0)
		return ;
	tptr = *ptr;
	if (*ptr)
	{
		free(**ptr);
		**ptr = NULL;
		is_array(&tptr + sizeof(tptr), del_func, i + 1);
	}
}

void	ft_memdel(size_t ac, t_del_func del_func, ...)
{
	va_list	ap;
	void	**ptr;

	if (!del_func)
		del_func = free;
	va_start(ap, del_func);
	while (ac-- > 0)
	{
		ptr = va_arg(ap, void **);
		if (ptr && *ptr)
		{
			is_array((&ptr), del_func, 0);
		}
	}
	va_end(ap);
}
