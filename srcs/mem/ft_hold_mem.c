/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hold_mem.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 08:54:11 by danpalac          #+#    #+#             */
/*   Updated: 2024/10/31 08:54:18 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_hold_mem(size_t ac, t_list **list, ...)
{
	va_list ap;
	void **ptr;

	if (!list)
		return ;
	va_start(ap, list);
	while (ac-- > 0)
	{
		ptr = va_arg(ap, void **);
		if (ptr && *ptr)
		{
			ft_lstadd_back(list, ft_lstnew(*ptr));
			*ptr = NULL;
		}
	}
	va_end(ap);
}
