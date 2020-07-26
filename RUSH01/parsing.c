#include <stdlib.h>
#include "parsing.h"

void ft_pars_argv_in_grid(int **sudoku, char *argv, int size)
{
    int i;

    i = 0;
    while (++i <= size)
        sudoku[0][i] = argv[i - 1] - '0';
    i = 0;
    while (++i <= size)
        sudoku[size + 1][i] = argv[i + 3] - '0';
    i = 0;
    while (++i <= size)
        sudoku[i][0] = argv[i + 7] - '0';
    i = 1;
    while (i <= size)
    {
        sudoku[i][size + 1] = argv[i + 11] - '0';
        i++;
    }
}

int **ft_sudoku_alocating(int size, char *argv)
{
    int i;
    int j;
    int **sudoku;

    if (!(sudoku = (int **)malloc(sizeof(int *) * size + 2)))
		return (0);
	i = -1;
	while (++i < size + 2)
		if (!(sudoku[i] = (int *)malloc(sizeof(int) * size + 2)))
			return (0);
	i = -1;
	while (++i < size + 2)
	{
		j = -1;
		while (++j < size + 2)
			sudoku[i][j] = 0;
	}
	ft_pars_argv_in_grid(sudoku, argv, size);
	return (sudoku);
}

int **pls_free_mem(int **sudoku, int size)
{
    int i;

    i = -1;
    while (++i < size + 2)
        free(sudoku[i]);
    free(sudoku); 
    return (NULL);
}