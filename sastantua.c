#include <unistd.h>
#include <stdio.h>

#define ROWS_SUM(a) (2 * a + a * (a + 1) / 2)
#define DOOR_SIZE(a) (a - ((a % 2) ? 0 : 1))

void	ft_putnchar(char c, int n){
    while (n--)
        putchar(c);
}

void	print_row(int line, int size, int stars, int spaces) {
    putchar('|');
    ft_putnchar('.', spaces);
    putchar('/');
    if (line >= ROWS_SUM(size) - DOOR_SIZE(size)){
        ft_putnchar('*', stars - (DOOR_SIZE(size) - 1) / 2);
        if (size >= 5 && line == ROWS_SUM(size) - DOOR_SIZE(size) / 2 - 1) {
            ft_putnchar('|', DOOR_SIZE(size) - 2);
            putchar('$');
            putchar('|');
        } else
            ft_putnchar('|', DOOR_SIZE(size));
        ft_putnchar('*', stars - (DOOR_SIZE(size) - 1) / 2);
    }
    else
        ft_putnchar('*', stars * 2 + 1);
    putchar('\\');
    putchar('\n');
}

int		last_row_count(int size){
    int floor;
    int width;
    int floor_step;

    floor = 1;
    width = 1;
    floor_step = 4;
    while (floor <= size){
        width += 2 * (2 + floor);
        floor++;
        width += floor_step;
        if (floor % 2 && floor < size)
            floor_step += 2;
    }
    width -= floor_step;
    return (width);
}

void	sastantua(int size){
    int		line = 0;
    int		lvl = 1;
    int		star_counter = 0;
    int     space_counter = last_row_count(size);
    int		row_in_lvl;

    while (lvl++ <= size) {
        row_in_lvl = 1;
        while (row_in_lvl++ < (lvl + 2)) {
            print_row(line, size, star_counter, space_counter / 2 - star_counter - 1);
            star_counter++;
            line++;
        }
        star_counter += ((lvl % 2) ? (lvl - 1) / 2 : lvl / 2) + 1;
    }
}

int		main(void){
    for(int i = 1; i <= 2; i++)
        sastantua(i);
}

