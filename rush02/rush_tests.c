/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_tests.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aballote <aballote@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 11:57:58 by aballote          #+#    #+#             */
/*   Updated: 2026/09/26 19:57:25 by fgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

void	dictionary_parsing(void)
{
	char	*pathdict;
	char	*buffer;
	int	size;
	int	descriptor;
	int	test;

	pathdict = "./numbers.dict";
	
	size = 1;
	test = 1;
	buffer = "\0";
	while (test != -1)
	{
		descriptor = open(pathdict, O_RDONLY);
		buffer = "\0";
		printf("%d\n", size);
		buffer = malloc(sizeof(char) * size);
// TESTER SI SIZE_MAX EXISTE
		test = read(descriptor, buffer, size);
		size++;
		free(buffer);
		close(descriptor);
	}

	buffer = "\0";
	buffer = malloc(sizeof(char) * size);
	read(descriptor, buffer, size - 1);
	
	write(1, buffer, size - 1);
	close(descriptor);
}

int	main(void)
{
	dictionary_parsing();

	return (0);
}
