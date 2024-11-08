/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_refnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:30:35 by danpalac          #+#    #+#             */
/*   Updated: 2024/11/08 16:08:04 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_ref	*ft_refnew(void **ref, char *name, int type)
{
	t_ref	*new_ref;

	new_ref = (t_ref *)malloc(sizeof(t_ref));
	if (!new_ref)
		return (NULL);
	new_ref->name = ft_strdup(name);
	if (!new_ref->name)
		return (free_null((void **)&new_ref), NULL);
	new_ref->id = 0;
	new_ref->ref = *ref;
	new_ref->addr = ref;
	new_ref->type = type;
	new_ref->next = NULL;
	return (new_ref);
}
