/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_cmd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:54:43 by danpalac          #+#    #+#             */
/*   Updated: 2024/10/15 21:09:21 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_command	*create_command(char *cmd, char *arg)
{
	t_command	*new_command;

	new_command = malloc(sizeof(t_command));
	if (!new_command)
		ft_error("Error al crear el comando", 1);
	new_command->command = cmd;
	new_command->args = malloc(3 * sizeof(char *));
	if (!new_command->args)
		ft_error("Error al crear los argumentos", 1);
	new_command->args[0] = cmd;
	new_command->args[1] = arg;
	new_command->args[2] = NULL;
	return (new_command);
}
