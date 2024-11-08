/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_refadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 23:37:26 by danpalac          #+#    #+#             */
/*   Updated: 2024/11/08 23:37:36 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

void	ft_refadd_front(t_ref **ref, t_ref *new)
{
	if (!ref || !new)
		return ;
	new->next = *ref;
	*ref = new;
}
