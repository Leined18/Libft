/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_redirect_output.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:54:50 by danpalac          #+#    #+#             */
/*   Updated: 2024/10/16 09:46:43 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	redirect_output(int fd)
{
	if (dup2(fd, STDOUT_FILENO) == -1)
		ft_error("Error redirigiendo la salida estándar", 0);
	close(fd);
}
