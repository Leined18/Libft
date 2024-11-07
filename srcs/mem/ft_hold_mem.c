/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hold_mem.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 08:54:11 by danpalac          #+#    #+#             */
<<<<<<< Updated upstream
/*   Updated: 2024/11/07 12:12:06 by danpalac         ###   ########.fr       */
=======
/*   Updated: 2024/11/07 12:57:33 by danpalac         ###   ########.fr       */
>>>>>>> Stashed changes
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_new_mem(void **content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

void	ft_hold_mem(size_t ac, t_list **list, ...)
{
	va_list	ap;
	void	**ptr;

	if (!list)
		return ;
	va_start(ap, list);
	while (ac-- > 0)
	{
		ptr = va_arg(ap, void **);
		if (ptr && *ptr)
			ft_lstadd_front(list, ft_new_mem(ptr));
	}
	va_end(ap);
}
