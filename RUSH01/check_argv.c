#include "check_argv.h"

void	ft_remove_space(char *str)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while ((str[j - 1] && str[j]) || j == 0)
	{
		str[i] = str[j];
		i++;
		j += 2;
	}
	str[i] = '\0';
}

int ft_argv_is_valid(char *str, int size)
{
    int i;

    i = 0;
    while(str[i])
    {
        if (i % 2 == 0)
            if(!(str[i] <= size + '0' && str[i] >= '1'))
                return (1);
        i++;
    }
    i = (i + 1) / 2;
    if (!(i == 12 || i == 16 || i == 20 || i == 24 || i == 28 || i == 32 || i == 36))
        return (1);
    ft_remove_space(str);
    return (0);
}