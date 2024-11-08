/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_ref.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:43:50 by danpalac          #+#    #+#             */
/*   Updated: 2024/11/08 15:03:25 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_ref(t_list **list, t_ref *ref)
{
	t_list	*new;

	if (!list || !ref)
		return ;
	new = ft_lstnew(ref);
	if (!new)
		return ;
	ft_lstadd_back(list, new);
}
