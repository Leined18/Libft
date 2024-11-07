/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_2d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:41:20 by danpalac          #+#    #+#             */
/*   Updated: 2024/11/07 12:42:28 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	lst_add_2d(t_list **list, char **array)
{
	int i;
	t_list *new;

	i = 0;
	while (array[i])
	{
		new = ft_lstnew((void **)(&array[i]));
		ft_lstadd_front(list, new);
		i++;
	}
}
