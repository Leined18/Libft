/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danpalac <danpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:58:41 by danpalac          #+#    #+#             */
/*   Updated: 2024/10/15 13:41:21 by danpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"

int	main(void)
{
	t_command	*cmd[2];

	cmd[0] = create_command("ps", "-s");
	cmd[1] = create_command("awk", "$s {print $2}");
	pipe_commands(cmd[0], cmd[1]);
	ft_memdel(5, cmd[0]->args, cmd[1]->args, cmd[0], cmd[1]);
	return (0);
}
