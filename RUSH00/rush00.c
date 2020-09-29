#include <stdio.h>

void print_hor(int x, char lft, char rght, char cntr)
{
    int i;

    i = -1;
    while (++i != x) {
        if (i == 0)
            putchar(lft);
        else if (i == x - 1)
            putchar(rght);
        else
            putchar(cntr);
    }
    putchar('\n');
}

void print_vert(int x, int y, char str)
{
    int i;

    while (y-- - 2) {
        putchar(str);
        if (x > 1) {
            i = 0;
            while (i++ < x - 2) {
                putchar(' ');
                if (i == x)
                    putchar(str);
            }
        }
        if (x > 1)
            putchar(str);
        putchar('\n');
    }
}

void	rush00(int x, int y)
{
    if (x >= 1) {
        if (y >= 1)
            print_hor(x, 'o', 'o', '-');
        if (y > 2)
            print_vert(x, y, '|');
        if (y >= 2)
            print_hor(x, 'o', 'o', '-');
    }
}

void	rush01(int x, int y)
{
    if (x >= 1) {
        if (y >= 1)
            print_hor(x, '/', '\\', '*');
        if (y > 2)
            print_vert(x, y, '*');
        if (y >= 2)
            print_hor(x, '\\', '/', '*');
    }
}

void	rush02(int x, int y)
{
    if (x >= 1) {
        if (y >= 1)
            print_hor(x, 'A', 'A', 'B');
        if (y > 2)
            print_vert(x, y, 'B');
        if (y >= 2)
            print_hor(x, 'C', 'C', 'B');
    }
}

void	rush03(int x, int y)
{
    if (x >= 1) {
        if (y >= 1)
            print_hor(x, 'A', 'C', 'B');
        if (y > 2)
            print_vert(x, y, 'B');
        if (y >= 2)
            print_hor(x, 'A', 'C', 'B');
    }
}

void	rush04(int x, int y)
{
    if(x >= 1) {
        if (y >= 1)
            print_hor(x, 'A', 'C', 'B');
        if (y > 2)
            print_vert(x, y, 'B');
        if (y >= 2)
            print_hor(x, 'C', 'A', 'B');
    }
}

int     main(void)
{
    rush04(3, 1);
    return (0);
}
