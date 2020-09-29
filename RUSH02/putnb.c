#include <stdio.h>
#include <stdlib.h>
#include "ft.h"

void	putnb_th(int pow, t_list *map)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = malloc((sizeof(char) * 3 * pow) + 1);
	if (tmp)
	{
		tmp[i] = '1';
		while (++i < (3 * pow + 1))
			tmp[i] = '0';
	}
	tmp[3 * pow + 1] = '\0';
	printf("%s ", map[search_in_map(map, tmp)].val);
	free(tmp);
}

void	putnb_o(char *str, unsigned size, t_list *map)
{
	char temp1[10];
	char temp[10];

	if (size == 3)
	{
		if ((*str) != '0')
		{
			printf("%s ", map[search_in_map2(map, *str)].val);
			printf("%s ", map[search_in_map(map, "100")].val);
		}
		putnb_o(++str, size - 1, map);
	}
	if (size == 2)
	{
		if ((*str) != '0')
		{
			if (*str == '1')
			{
				ft_concat(*str, *(str + 1), temp1);
				printf("%s ", map[search_in_map(map, temp1)].val);
				return ;
			}
			ft_concat(*str, '0', temp);
			printf("%s ", map[search_in_map(map, temp)].val);
		}
		putnb_o(++str, size - 1, map);
	}
	if (size == 1 && *str != '0')
		printf("%s ", map[search_in_map2(map, *str)].val);
}

void	putnb(char *str, t_list *map)
{
	if (*str)
	{
		if (ft_strlen(str) > 3)
		{
			if (ft_strlen(str) % 3)
			{
				putnb_o(str, ft_strlen(str) % 3, map);
				putnb_th(ft_strlen(str) / 3, map);
				putnb((ft_strlen(str) % 3) + str, map);
			}
			else if (*str == '0' && *(str + 1) == '0' && *(str + 2) == '0')
				putnb(3 + str, map);
			else
			{
				putnb_o(str, 3, map);
				putnb_th((ft_strlen(str) / 3) - 1, map);
				putnb(3 + str, map);
			}
		}
		else
			putnb_o(str, ft_strlen(str), map);
	}
	else
		ft_putstr("error\n");
}