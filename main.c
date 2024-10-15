/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:58:41 by danpalac          #+#    #+#             */
/*   Updated: 2024/10/15 23:01:00 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"

char	*get_env_value(char *cmd, char **envp)
{
	int		i;
	size_t	len;

	len = ft_strlen(cmd);
	i = 0;
	while (envp[i])
	{
		if (strncmp(envp[i], cmd, len) == 0 && envp[i][len] == '=')
			return (&envp[i][len + 1]);
		i++;
	}
	return (NULL);
}

char	*join_path(const char *dir, const char *cmd)
{
	char	*full_path;
	char	*tmp;

	tmp = ft_strjoin(dir, "/");
	if (!tmp)
		return (NULL);
	full_path = ft_strjoin(tmp, cmd);
	free(tmp);
	return (full_path);
}

char	*get_cmd_path(char *cmd, char **envp)
{
	char	*path_env;
	char	**paths;
	char	*full_path;
	int		i;

	path_env = get_env_value("PATH", envp);
	if (!path_env)
		return (NULL);
	paths = ft_split(path_env, ':');
	i = 0;
	while (paths[i])
	{
		full_path = join_path(paths[i], cmd);
		if (access(full_path, X_OK) == 0)
		{
			free_2d(paths);
			return (full_path);
		}
		free(full_path);
		i++;
	}
	free_2d(paths);
	return (NULL);
}

t_command	*parse_command(char *input)
{
	t_command	*cmd;
	char		**args;

	args = ft_split(input, ' ');
	if (!args || !args[0])
		return (NULL);
	cmd = malloc(sizeof(t_command));
	if (!cmd)
	{
		free_2d(args);
		return (NULL);
	}
	cmd->command = args[0];
	cmd->args = args;
	return (cmd);
}

int	main(int argc, char **argv, char **envp)
{
	t_command	*cmd;

	if (argc >= 2)
	{
		cmd = parse_command(argv[1]);
		if (!cmd)
			return (1);
		cmd->cmd_path = get_cmd_path(cmd->command, envp);
		if (!cmd->cmd_path)
		{
			free_2d(cmd->args);
			free(cmd);
			return (1);
		}
		execute_command(cmd);
		free(cmd->args);
		free(cmd);
	}
	return (0);
}
