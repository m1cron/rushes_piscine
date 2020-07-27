/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csibyl <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/27 14:36:06 by csibyl            #+#    #+#             */
/*   Updated: 2020/07/27 15:25:08 by csibyl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <libgen.h>

void		ft_outstr(int fd, char *str)
{
	while (*str)
		write(fd, str++, 1);
}

void	ft_out_error(char *param, char *name_file, int dir)
{
	if (errno == 0)
		return ;
	ft_outstr(2, basename(param));

}


int		ft_cat(char **args, int count, int offset)
{

}


int			main(int argc, char **argv)
{
	if (argc < 2)
		return (1);
	else
		if (!ft_cat(argv, argc - 1, 1))
			return (1);
	return (0);
}
