int	is_prime(int nb)
{
	int	i;

	i = 0;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	find_next_prime(nb)
{
	nb++;
	while (is_prime(nb) != 1)
		nb++;
	return (nb);
}
