#ifndef CHECKS_H
# define CHECKS_H

# include "ft_boolean.h"

t_bool		ft_check_up_cols(int **sudoku, int x, int size);
t_bool		ft_check_down_cols(int **sudoku, int x, int size);
t_bool		ft_check_left_rows(int **sudoku, int y, int size);
t_bool		ft_check_right_rows(int **sudoku, int y, int size);
t_bool		ft_check_all_sides(int **sudoku, int size);

#endif