#include "utils.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

t_bool	ft_error(void)
{
	write(1, "Error\n", 6);
    return (true);
}

void	ft_print_sudoku_grid(int **arr, int max_value)
{
	int		x;
	int		y;

	x = 1;
	while (x <= max_value)
	{
		y = 1;
		while (y <= max_value)
		{
			ft_putchar(arr[x][y] + '0');
			if (y != max_value)
				ft_putchar(' ');
			y++;
		}
		ft_putchar('\n');
		x++;
	}
}

t_bool		ft_is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (false);
	return (true);
}

int		ft_digits_in_str(char *str)
{
	int		i;
	int		n;

	i = 0;
	n = 0;
	while (str[i])
	{
		if (!ft_is_digit(str[i]))
			n++;
		i++;
	}
	return (n);
}