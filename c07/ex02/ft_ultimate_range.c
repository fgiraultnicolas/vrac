/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgirault <fgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:16:53 by fgirault          #+#    #+#             */
/*   Updated: 2026/09/24 17:42:37 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	*range = malloc(sizeof(int) * (max - min));
	if (*range == 0)
		return (-1);
	if (min >= max)
	{
		range = 0;
		return (0);
	}
	while (min < max)
	{
		*range[i] = min;
		min++;
		i++;;
	}
	return (max - min);
}

int	main(void)
{
	int	*range[5];

	printf("%d\n", ft_ultimate_range(range, 5, 10));
	return (0);
}
