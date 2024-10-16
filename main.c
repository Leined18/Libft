/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:58:41 by danpalac          #+#    #+#             */
/*   Updated: 2024/10/16 10:21:07 by danpalac         ###   ########.fr       */
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
	if (!full_path)
		return (free_null(tmp), NULL);
	free_null(tmp);
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
	if (!paths)
		return (NULL);
	i = 0;
	while (paths[i])
	{
		full_path = join_path(paths[i], cmd);
		if (!full_path)
			return (free_2d(paths), NULL);
		if (access(full_path, X_OK) == 0)
			return (free_2d(paths), full_path);
		free_null(full_path);
		i++;
	}
	free_2d(paths);
	return (NULL);
}

t_command	*parse_command(char *input, char **environ)
{
	t_command	*cmd;
	char		**args;

	args = ft_split(input, ' ');
	if (!args || !args[0])
		return (NULL);
	cmd = malloc(sizeof(t_command));
	if (!cmd)
		return (free_2d(args), NULL);
	cmd->cmd_path = NULL;
	if (environ)
		cmd->cmd_path = get_cmd_path(args[0], environ);
	if ((access(args[0], X_OK) && !cmd->cmd_path) || access(cmd->cmd_path,
			X_OK))
		return (free_2d(args), ft_memdel(2, free_null, cmd, cmd->cmd_path),
			NULL);
	cmd->command = args[0];
	cmd->args = args;
	return (cmd);
}

int	main(int argc, char **argv, char **envp)
{
	t_command	*cmd[2];

	if (argc >= 2)
	{
		cmd[0] = parse_command(argv[1], envp);
		if (!cmd[0])
			return (1);
		if (argc >= 3)
		{
			cmd[1] = parse_command(argv[2], envp);
			if (!cmd[1])
				ft_error("", 1);
			pipe_commands(cmd[0], cmd[1]);
		}
		else
			execute_command(cmd[0]);
	}
	if (cmd[0])
	{
		ft_memdel(2, free_2d, cmd[0]->args, NULL);
		ft_memdel(2, free_null, cmd[0], cmd[0]->cmd_path, NULL);
	}
	if (cmd[1])
	{
		ft_memdel(2, free_2d, cmd[1]->args, NULL);
		ft_memdel(2, free_null, cmd[1], cmd[1]->cmd_path, NULL);
	}
	return (0);
}
