#include "inc/libft.h"

typedef struct s_command
{
	char	*command;
	char	**args;
}			t_command;

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

void	execute_command(t_command *cmd)
{
	if (execvp(cmd->command, cmd->args) == -1)
	{
		ft_error("Error al ejecutar el comando", 1);
	}
}

void	redirect_output(int fd)
{
	if (dup2(fd, STDOUT_FILENO) == -1)
		ft_error("Error redirigiendo la salida estándar", 1);
	close(fd);
}

void	redirect_input(int fd)
{
	if (dup2(fd, STDIN_FILENO) == -1)
		ft_error("Error redirigiendo la entrada estándar", 1);
	close(fd);
}

void	create_child(t_command *cmd, int *pipefd, int child_num)
{
	if (child_num == 1)
	{
		close(pipefd[0]);
		redirect_output(pipefd[1]);
	}
	else if (child_num == 2)
	{
		close(pipefd[1]);
		redirect_input(pipefd[0]);
	}
	execute_command(cmd);
}

void	handle_parent(int *pipefd, pid_t pid1, pid_t pid2)
{
	close(pipefd[0]);
	close(pipefd[1]);
	waitpid(pid1, NULL, 0);
	waitpid(pid2, NULL, 0);
}

void	pipe_commands(t_command *cmd1, t_command *cmd2)
{
	int	pipefd[2];

	pid_t pid1, pid2;
	if (pipe(pipefd) == -1)
		ft_error("Error al crear el pipe", 1);
	pid1 = fork();
	if (pid1 == -1)
		ft_error("Error al hacer fork", 1);
	if (pid1 == 0)
		create_child(cmd1, pipefd, 1);
	pid2 = fork();
	if (pid2 == -1)
		ft_error("Error al hacer fork", 1);
	if (pid2 == 0)
		create_child(cmd2, pipefd, 2);
	handle_parent(pipefd, pid1, pid2);
}

int	main(void)
{
	t_command	*cmd1;
	t_command	*cmd2;

	cmd1 = create_command("cat", "-e");
	cmd2 = create_command("ls", NULL);
	pipe_commands(cmd2, cmd1);
	ft_memdel(5, (void **)&cmd1->args, (void **)&cmd1, (void **)&cmd2->args, (void **)&cmd2);
	return (0);
}
