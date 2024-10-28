/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 12:27:04 by danpalac          #+#    #+#             */
/*   Updated: 2024/10/28 18:24:01 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_error(char *err, t_bool yeet)
{
	if (err && *err)
		ft_putstr_color_fd(RED, err, 2);
	if (yeet)
		exit(EXIT_FAILURE);
}
