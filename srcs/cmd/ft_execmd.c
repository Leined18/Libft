/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_execmd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:54:18 by danpalac          #+#    #+#             */
/*   Updated: 2024/10/15 22:54:21 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// This funtion is temporal, we must to use exeve instead of execvp

void	execute_command(t_command *cmd)
{
	if (execve(cmd->cmd_path, cmd->args, NULL) < 0)
	{
		if (execve(cmd->command, cmd->args, NULL) < 0)
		{
			ft_memdel(4, cmd->args, cmd->command, cmd->cmd_path, cmd);
			ft_error("Error al ejecutar el comando\n", 1);
		}
	}
}
