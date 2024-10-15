/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_redirect_output.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:54:50 by danpalac          #+#    #+#             */
/*   Updated: 2024/10/15 12:54:51 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	redirect_output(int fd)
{
	if (dup2(fd, STDOUT_FILENO) == -1)
		ft_error("Error redirigiendo la salida estándar", 1);
	close(fd);
}
