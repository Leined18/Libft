/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_refadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:35:39 by danpalac          #+#    #+#             */
/*   Updated: 2024/11/08 14:50:19 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_refadd_back(t_ref **ref, t_ref *new)
{
	t_ref	*temp;

	if (!*ref)
	{
		*ref = new;
		return ;
	}
	temp = *ref;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
}
