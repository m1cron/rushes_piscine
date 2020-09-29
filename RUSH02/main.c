#include "ft.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>


int	main(int argc, char **argv)
{
	t_list *map;
	int i;
	int len = ft_strlen(argv[1]);
	map = process("dict.txt");
	putnb(argv[1], map);
	i = 0;
	while(i < SIZE)
	{
		free(map[i].nb);
		free(map[i].val);	
		i++;
	}
	free(map);
}