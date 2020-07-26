#ifndef PARSING_H
# define PARSING_H

void ft_pars_argv_in_grid(int **sudoku, char *argv, int size);
int **ft_sudoku_alocating(int size, char *argv);
void **pls_free_mem(int **sudoku, int size);

#endif