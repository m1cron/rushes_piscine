#ifndef FT_H
# define FT_H

# define SIZE 512

typedef struct	s_list
{
	char	*nb;  // цифарки
	char	*val; // слова
}		t_list;

char	*ft_strdup(char *src);
void	ft_putstr(char *str);
char	*ft_getnb(int fd);
char	*ft_getval(int fd, char *c);
t_list	*process(char *file);

int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strcat(char *dest, const char *src);
int search_in_map(t_list *map, char *str);
int search_in_map2(t_list *map, char str);
char	*ft_strncat(char *dest, char *src, int nb);
void ft_concat (char s0, char s1, char *s);


void	putnb_th(int pow, t_list *map);
void	putnb_o(char *str, unsigned size, t_list *map);
void	putnb(char *str, t_list *map);

#endif
