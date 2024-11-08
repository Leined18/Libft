/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_refadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:35:39 by danpalac          #+#    #+#             */
/*   Updated: 2024/11/08 15:44:56 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_refadd(t_ref **ref, ...)
{
	va_list	ap;
	t_ref	**temp;

	if (!ref)
		return ;
	va_start(ap, ref);
	while (ref)
	{
		temp = va_arg(ap, t_ref **);
		if (temp)
			ft_refadd_back(ref, *temp);
		if (!temp)
			break ;
	}
	va_end(ap);
}
