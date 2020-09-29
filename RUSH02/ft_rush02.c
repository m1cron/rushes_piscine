#include "ft.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

char	*ft_getnb(int fd)
{
	int	i;
	char	c[1];
	char	*str;

	if (!(str = malloc(sizeof(char) * SIZE)))
		exit(1);
	i = 0;
	read(fd, c, 1);
	while (c[0] == '\n')
		read(fd, c, 1);
	while (c[0] >= '0' && c[0] <= '9')
	{
		str[i] = c[0];
		read(fd, c, 1);
		i++;
	}
	return (str);
}

char	*ft_getval(int fd, char *c)
{
	int	i;
	char	*str;

	if (!(str = malloc(sizeof(char) * 128)))
		exit(1);
	i = 0;
	while (c[0] != '\n')
	{
		str[i] = c[0];
		read(fd, c, 1);
		i++;
	}
	str[i] = '\0';
	return (str);
}

t_list	*process(char *file)
{
	int	i;
	int	fd;
	char	c[1];
	t_list	*tab;
	char *tmp;

	fd = open(file, O_RDONLY);
	if (fd == -1 || !(tab = malloc(sizeof(t_list) * SIZE)))
		exit(1);
	i = 0;
	while (i < SIZE)
	{
		tab[i].nb = ft_getnb(fd);
		read(fd, c, 1);
		while (c[0] == ' ')
			read(fd, c, 1);
		if (c[0] == ':')
			read(fd, c, 1);
		while (c[0] == ' ')
			read(fd, c, 1);
		tmp = ft_getval(fd, c);
		tab[i].val = ft_strdup(tmp);
		free(tmp);
		i++;
	}
	close(fd);
	return (tab);
}

int search_in_map(t_list *map, char *str)
{
	int i = 0;
	while (i < SIZE)
	{
		if (ft_strcmp(map[i].nb, str) == 0)
			return (i);
		i++;
	}
	return (-1);
}

int search_in_map2(t_list *map, char str)
{
	int i = 0;
	while (i < SIZE)
	{
		if (ft_strcmp(map[i].nb, &str) == 0)
			return (i);
		i++;
	}
	return (-1);
}