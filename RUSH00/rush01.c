#include <stdio.h>

void print_hor(int x, char str0, char str1) {
    int i;

    i = 0;
    while (i != x) {
        if (i == 0)
            putchar(str0);
        else if (i == x - 1)
            putchar(str1);
        else
            putchar('*');
        i++;
    }
    putchar('\n');
}

void print_vert(int x, int y) {
    for(int i = 0; i < y - 2; i++){
        putchar('*');
        if(x > 1)
            for(int j = 0; j < x - 2; j++) {
                putchar(' ');
                if (j == x)
                    putchar('|');
            }
        if (x != 1)
            putchar('*');

        putchar('\n');
    }
}

void	rush(int x, int y)
{
    print_hor(x, '/', '\\');
    if(x >= 1 && y > 2)
        print_vert(x, y);
    if(y >= 2)
        print_hor(x, '\\', '/');
}

int     main(void)
{
    rush(4, 4);
    return (0);
}
