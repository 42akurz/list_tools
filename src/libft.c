#include "../includes/list.h"

size_t	ft_strlen(const char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned int	count;

	count = 0;
	while (count < n)
	{
		if ((unsigned char)str1[count] != (unsigned char)str2[count])
		{
			return ((unsigned char)str1[count] - (unsigned char)str2[count]);
		}
		if ((unsigned char)str1[count] == '\0'
			|| (unsigned char)str2[count] == '\0')
		{
			return (0);
		}
		count++;
	}
	return (0);
}

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*res;

	i = 0;
	res = malloc(ft_strlen(s1) + 1);
	if (res == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		res[i] = s1[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
