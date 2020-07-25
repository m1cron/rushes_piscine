rm -f libft.a
find . -maxdepth 1 -name "*.c" -type f -exec gcc -Wall -Werror -Wextra -c {} \;
ar -rcs libft.a *.o
find . -maxdepth 1 -name "*.o" -type f -delete
