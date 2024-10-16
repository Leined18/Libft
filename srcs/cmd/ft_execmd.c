/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_execmd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:54:18 by danpalac          #+#    #+#             */
/*   Updated: 2024/10/16 09:56:43 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	execute_command(t_command *cmd)
{
	int	result;

	if (cmd->cmd_path)
		result = execve(cmd->cmd_path, cmd->args, NULL);
	if (result < 0)
		result = execvp(cmd->command, cmd->args);
	if (result < 0)
	{
		free_2d(cmd->args);
		ft_memdel(3, free_null, cmd, cmd->cmd_path, NULL);
		ft_error("Error al ejecutar el comando\n", 1);
	}
}
