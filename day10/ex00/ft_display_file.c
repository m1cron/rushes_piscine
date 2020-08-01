/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csibyl <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/27 13:20:28 by csibyl            #+#    #+#             */
/*   Updated: 2020/07/27 17:40:43 by csibyl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void		ft_outstr(int fd, char *str)
{
	while (*str)
		write(fd, str++, 1);
}

int			ft_display_file(char *str)
{
	char			buf[1024];
	int				fd;
	unsigned int	buf_size;

	fd = open(str, O_RDONLY);
	if (fd < 0)
		return (1);
	while ((buf_size = read(fd, buf, 1024)) > 0)
	{
		if (buf_size == 0)
			return (1);
		ft_outstr(1, &buf[0]);
	}
	return (0);
}

int			main(int argc, char **argv)
{
	if (argc < 2)
		ft_outstr(2, "File name missing.\n");
	else if (argc > 2)
		ft_outstr(2, "Too many arguments.\n");
	else
	{
		if (ft_display_file(argv[1]))
			ft_outstr(2, "Cannot read file.\n");
		else
			return (0);
	}
	return (1);
}
