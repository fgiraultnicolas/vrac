/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgirault <fgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 12:00:31 by fgirault          #+#    #+#             */
/*   Updated: 2026/09/25 12:29:59 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
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
	dest = malloc(sizeof(char) * (count + size - 1));
	j = 0;
	while (j <= size)
	{
		i = 0;
		while (*strs[i] != '\0')
		{
			i++;
			*dest = **strs;
			dest++;
		}
		*dest = *sep;
		j++;
		strs++;
	}
	return (dest);
}

int	main(void)
{
	char	strs[3][6];

	*strs[0] = "test1";
	*strs[1] = "test2";
	*strs[2] = "test3";
	printf("%s\n", *ft_strcat(3, strs, " "));
	return (0);
}
