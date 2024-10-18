/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:20:09 by danpalac          #+#    #+#             */
/*   Updated: 2024/10/16 11:31:18 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"

void	loop_commands(char **envp)
{
	char		*input;
	t_command	*cmd;

	while (1)
	{
		write(1, "minishell> ", 11);
		input = get_next_line(0);
		if (!input)
		{
			write(1, "exit\n", 5);
			break ;
		}
		input[strcspn(input, "\n")] = 0;
		cmd = parse_command(input, envp);
		if (cmd)
		{
			execute_command(cmd);
			free_2d(cmd->args);
			free(cmd);
		}
		else
			ft_successful("Failed to parse command", 1);
		free(input);
	}
}

int	main(int argc, char **argv, char **envp)
{
	(void)argv;
	if (argc >= 2)
	{
		write(1, "Usage: ./minishell\n", 19);
		return (1);
	}
	loop_commands(envp);
	return (0);
}