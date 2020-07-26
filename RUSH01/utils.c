#include "utils.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_error(void)
{
	write(1, "Error\n", 6);
    return (1);
}

void	ft_print_sudoku_grid(int **arr, int max_value)
{
	int		x;
	int		y;

	x = 0;
	while (x <= max_value)
	{
		y = 0;
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

int		ft_is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (0);
	return (1);
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


int		ft_return_size_from_argv(char *str)
{
	return (ft_digits_in_str(str) / 4);
}