/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_redirect_input.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:54:38 by danpalac          #+#    #+#             */
/*   Updated: 2024/10/15 12:54:40 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	redirect_input(int fd)
{
	if (dup2(fd, STDIN_FILENO) == -1)
		ft_error("Error redirigiendo la entrada estándar", 1);
	close(fd);
}
