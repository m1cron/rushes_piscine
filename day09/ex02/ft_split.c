#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	index = 0;
	while (index < n && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}

int	is_char_in_string(char c, char *set)
{
	while (1)
	{
		if (*set == '\0')
			return (c == '\0');
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

int		ft_count_strs(char *str, char *charset)
{
	int		count;
	char	*prev;
	char	*next;

	count = 0;
	prev = str;
	next = str;
	while (1)
	{
		if (is_char_in_string(*str, charset))
			next = str;
		if (next - prev > 1)
			count++;
		if (*str == '\0')
			break ;
		prev = next;
		str++;
	}
	return (count);
}

int		ft_pars_str(char **entry, char *prev, int size, char *charset)
{
	if (is_char_in_string(prev[0], charset))
	{
		prev++;
		size--;
	}
	*entry = (char *)malloc((size + 3) * sizeof(char));
	ft_strncpy(*entry, prev, size);
	(*entry)[size] = '\0';
	(*entry)[size + 1] = '\0';
	return (1);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		size;
	char	*prev;
	char	*next;
	char	**arr;

	arr = (char **)malloc((count_occur(str, charset) + 1) * sizeof(char *));
	i = 0;
	prev = str;
	next = str;
	while (1)
	{
		if (is_char_in_string(*str, charset))
			next = str;
		if ((size = next - previous) > 1)
			index += ft_pars_strs(&arr[i], prev, size, charset);
		if (*str == '\0')
			break ;
		prev = next;
		str++;
	}
	arr[i] = 0;
	return (arr);
} ///// PLS DEBUG
