#include <stdlib.h>
#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep)
{
	char	dest;
	int	i;
	int	j;
	int	count;

	j = 0;
	count = 0;
	while (j <= size)
	{
		i = 0;
		while (*strs[i] != '\0')
		{
			i++;
			count++;
		}
		j++;
		strs++;
	}
	dest = malloc(sizeof(char) * count)
	j = 0;
	while (j <= size)
	{
		i = 0;
		while (*strs[i] != '\0')
		{
			i++;
			dest = **strs;
		}
		j++;
		strs++;
	}
	return (&dest);
}

int	main(void)
{
	printf("%s\n", ft_strcat(3, , ));
	return (0);
}
