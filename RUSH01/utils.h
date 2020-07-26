#ifndef UTILS_H
# define UTILS_H

#include <unistd.h>

void	ft_putchar(char c);
int 	ft_error(void);
void	ft_print_sudoku_grid(int **sudoku, int size);
int		ft_is_digit(char c);
int		ft_digits_in_str(char *str);
int		ft_return_size_from_argv(char *str);

#endif