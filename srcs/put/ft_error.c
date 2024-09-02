/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 12:27:04 by danpalac          #+#    #+#             */
/*   Updated: 2024/09/02 14:02:02 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_error(char *err, t_bool yeet)
{
	if (err && *err)
		ft_putstr_color_fd("\033[1;31m", err, 2);
	if (yeet)
		exit(EXIT_FAILURE);
}
