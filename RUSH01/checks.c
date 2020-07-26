#include "checks.h"

int		ft_check_up_cols(int **sudoku, int x, int size)
{
	int		capacity;
	int		y;
	int		i;

	y = 1;
	capacity = 1;
	i = 1;
	while (y + i <= size)
	{
		if (sudoku[x][y] < sudoku[x][y + i])
		{
			capacity++;
			y += i;
			i = 1;
		}
		else
			i++;
	}
	if (capacity == sudoku[x][0])
		return (0);
	else
		return (1);
}

int		ft_check_down_cols(int **sudoku, int x, int size)
{
	int		capacity;
	int		y;
	int		i;

	y = size;
	capacity = 1;
	i = 1;
	while (y - i >= 1)
	{
		if (sudoku[x][y] < sudoku[x][y - i])
		{
			capacity++;
			y -= i;
			i = 1;
		}
		else
			i++;
	}
	if (capacity == sudoku[x][size + 1])
		return (0);
	else
		return (1);
}

int		ft_check_left_rows(int **sudoku, int y, int size)
{
	int		capacity;
	int		x;
	int		i;

	x = 1;
	capacity = 1;
	i = 1;
	while (x + i <= size)
	{
		if (sudoku[x][y] < sudoku[x + i][y])
		{
			capacity++;
			x += i;
			i = 1;
		}
		else
			i++;
	}
	if (capacity == sudoku[0][y])
		return (0);
	else
		return (1);
}

int		ft_check_right_rows(int **sudoku, int y, int size)
{
	int		capacity;
	int		x;
	int		i;

	x = size;
	capacity = 1;
	i = 1;
	while (x - i >= 1)
	{
		if (sudoku[x][y] < sudoku[x - i][y])
		{
			capacity++;
			x -= i;
			i = 1;
		}
		else
			i++;
	}
	if (capacity == sudoku[size + 1][y])
		return (0);
	else
		return (1);
}

int		ft_check_all_sides(int **sudoku, int size)
{
	int		i;

	i = 1;
	while (i <= size)
	{
		if (ft_check_up_cols(sudoku, i, size))
			return (1);
		if (ft_check_down_cols(sudoku, i, size))
			return (1);
		if (ft_check_left_rows(sudoku, i, size))
			return (1);
		if (ft_check_right_rows(sudoku, i, size))
			return (1);
		i++;
	}
	return (0);
}