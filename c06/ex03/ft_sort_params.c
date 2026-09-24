/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgirault <fgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 16:29:43 by fgirault          #+#    #+#             */
/*   Updated: 2026/09/23 18:40:08 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_putstr(char *str)
{
	int n;

	n = ft_strlen(str);
	write(1, str, n);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	tmp;

	i = 2;
	j = 1;
	while (i < argc)
	{
		while (j < i)
		{
			if (*argv[j + 1] < *argv[j])
			{
				tmp = *argv[j];
				*argv[j] = *argv[j + 1];
				*argv[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
	while (**argv != '\0')
	{
		ft_putstr(*argv);
		write(1, "\n", 1);
		argv++;
	}
	return (0);
}
