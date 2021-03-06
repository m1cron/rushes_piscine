#include <stdio.h>

void print_hor(int x, char str0, char str1, char str2) {
    int i;

    i = 0;
    while (i != x) {
        if (i == 0)
            putchar(str0);
        else if (i == x - 1)
            putchar(str2);
        else
            putchar(str1);
        i++;
    }
    putchar('\n');
}

void print_vert(int x, int y, char let) {
    for(int i = 0; i < y - 2; i++){
        putchar(let);
        if(x > 1)
            for(int j = 0; j < x - 2; j++)
                putchar(' ');
        if (x != 1)
            putchar(let);

        putchar('\n');
    }
}

void	rush(int x, int y)
{
    print_hor(x, 'A', 'B', 'C');
    if(x >= 1 && y > 2)
        print_vert(x, y, 'B');
    if(y >= 2)
        print_hor(x, 'C', 'B', 'A');
}

int     main(void)
{
    rush(4, 4);
    return (0);
}
