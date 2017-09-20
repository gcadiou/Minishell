/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcadiou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 19:20:11 by gcadiou           #+#    #+#             */
/*   Updated: 2017/09/20 20:05:52 by gcadiou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include "Libft/libft.h"
# include <dirent.h>

int		check_builtin(char *name);

void	set_env(char **env, char **args);
void	echo(char **args);

char	*check_path(char *name);
char	**parse_entry(char *entry);

char	*find_bin(char **env, char *name);

int		run_bin(char **args, char **env, char *cmd);

char	*read_entry();

int		execute(char **env);

char	*get_value(char **env, char *var);

int		print_prompt(char **env);

void	exit_error(char *error);

char	**create_env();
#endif
