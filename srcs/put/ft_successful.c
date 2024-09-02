/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_successful.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 12:29:08 by danpalac          #+#    #+#             */
/*   Updated: 2024/09/02 13:45:36 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_successful(char *msg, t_bool yeet)
{
	if (msg && *msg)
	{
		ft_putstr_color_fd("\x1b[32m", msg, 1);
		write(1, "\n", 1);
	}
	if (yeet)
		exit(EXIT_SUCCESS);
}
