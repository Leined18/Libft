#include "inc/libft.h"

void	send_signal(int pid, int signal)
{
	if (kill(pid, signal))
		ft_error("Failed to send signal", 1);
}

void	loop_commands(char **envp)
{
	char		*input;
	t_command	*cmd;
	static char	**env;

	if (envp)
		env = envp;
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
		cmd = parse_command(input, env);
		if (cmd)
		{
			execute_command(cmd);
			free_2d(cmd->args);
			free(cmd);
			send_signal(getppid(), SIGUSR1);
		}
		else
			ft_error("Failed to parse command", 1);
		free(input);
	}
}

void	ft_handler(int signum)
{
	if (signum == SIGUSR1)
	{
        loop_commands(NULL);
	}
}

int	main(int argc, char **argv, char **envp)
{
	pid_t	pid;

    (void)argv;
	if (argc >= 2)
	{
		write(1, "Usage: ./minishell\n", 19);
		return (1);
	}
	signal(SIGUSR1, ft_handler);
	pid = fork();
	if (pid == 0)
		loop_commands(envp);
	else
	{
		while (1)
		{
			pause();
			kill(pid, SIGUSR1);
		}
	}
	return (0);
}
