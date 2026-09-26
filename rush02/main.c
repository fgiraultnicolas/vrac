/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgirault <fgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 09:39:28 by fgirault          #+#    #+#             */
/*   Updated: 2026/09/26 09:58:49 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	error(unsigned long long nb)
{
	if (nb < 0)
		write(1, "Error\n", 6);
}

int	main(int argc, char **argv)
{
	if (argc > 3 || argc < 2)
		write(1, "Error\n", 6);
	else
		error(ft_atoi(*argv[argc - 1]));
	return (0);
}
