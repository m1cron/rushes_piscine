#ifndef UTILS_H
# define UTILS_H

# include <unistd.h>
# include "ft_boolean.h"

void	ft_putchar(char c);
t_bool 	ft_error(void);
void	ft_print_sudoku_grid(int **sudoku, int size);
t_bool		ft_is_digit(char c);
int		ft_digits_in_str(char *str);

#endif