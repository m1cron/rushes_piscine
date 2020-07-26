#include "check_argv.h"
#include "parsing.h"
#include "try_resolve.h"
#include "utils.h"

int		main(int argc, char **argv)
{
	int		**sudoku;
	int		inner_grid_size;

	if (argc != 2)
		return ft_error();
	inner_grid_size = ft_return_size_from_argv(argv[1]);
	if (ft_argv_is_valid(argv[1], inner_grid_size))
		return ft_error();
	if (!(sudoku = ft_sudoku_alocating(inner_grid_size, argv[1])))
		return ft_error();
	if (ft_pls_try_resolve(sudoku, inner_grid_size, 1, 1))
		return ft_error();
	ft_print_sudoku_grid(sudoku, inner_grid_size + 1);
	pls_free_mem(sudoku, inner_grid_size);
	return (0);
}