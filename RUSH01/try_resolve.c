#include "try_resolve.h"
#include "checks.h"

int		ft_check_grid(int **sudoku, int i, int x, int y, int size)
{
	int row;
	int col;

	row = 1;
	while (row <= size)
	{
		if (i == sudoku[row][y])
			return (1);
		row++;
	}
	col = 1;
	while (col <= size)
	{
		if (i == sudoku[x][col])
			return (1);
		col++;
	}
	return (0);
}

int		ft_pls_try_resolve(int **sudoku, int size, int x, int y)
{
	int i;

	i = 1;
	while (1)
	{
		while (i <= size && ft_check_grid(sudoku, i, x, y, size))
			i++;
		if (i <= size)
			sudoku[x][y] = i;
		else
		{
			sudoku[x][y] = 0;
			return (1);
		}
		if (x == size && y == size)
		{
			if (ft_check_all_sides(sudoku, size))
			{
				if (i >= size)
				{
					sudoku[x][y] = 0;
					return (1);
				}
				else
					continue;
			}
			else
				return (0);
		}
		if (x == size)
		{
			if (ft_pls_try_resolve(sudoku, size, 1, y + 1))
				continue;
			return (0);
		}
		else
		{
			if (ft_pls_try_resolve(sudoku, size, x + 1, y))
				continue;
			return (0);
		}
	}
}
