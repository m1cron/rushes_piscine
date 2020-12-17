#include <stdio.h>

int match(char *s1, char *s2)
{
    printf("%c\t%c\n", s1[0], s2[0]);

    if (*s1 != '\0' && *s2 == '*')
        return (match(s1 + 1, s2) || match(s1, s2 + 1));
    if (*s1 == '\0' && *s2 == '*')
        return (match(s1, s2 + 1));

    if (*s1 == *s2 && *s1 != '\0' && *s1 != '\0')
        return match(s1 + 1, s2 + 1);
    if (*s1 == *s2 && *s1 == '\0' && *s1 == '\0')
        return (1);
    return (0);
}

int main() {
    printf("%d\n", match("main.c", "****.c"));
    return 0;
}
