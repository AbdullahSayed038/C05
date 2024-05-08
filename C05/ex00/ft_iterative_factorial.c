
int ft_iterative_factorial(int nb)
{
	int	i;

	i = nb - 1;
	while (i > 0)
	{
		nb = nb * i;
		i--;
	}
	if (nb == 0)
	{
		return (1);
	}
	if (nb < 0)
	{
		return (0);
	}
	return (nb);
}