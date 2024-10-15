/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_execmd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:54:18 by danpalac          #+#    #+#             */
/*   Updated: 2024/10/15 13:40:43 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// This funtion is temporal, we must to use exeve instead of execvp

void	execute_command(t_command *cmd)
{
	if (execvp(cmd->command, cmd->args) < 0)
	{
		ft_error("Error al ejecutar el comando\n", 1);
	}
}
