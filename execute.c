/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_execute.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcadiou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 20:35:53 by gcadiou           #+#    #+#             */
/*   Updated: 2017/09/11 22:32:35 by gcadiou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int		run_bin(char **args)
{
	pid_t pid;

	pid = fork();
	if (pid > 0)
		wait(NULL);
	else if (pid < 0)
		exit_error("fork error");
	else
	{
		execve(

int		execute(char **args)
{
	ft_print_char_tab(args, '\n');
	return (0);
}
