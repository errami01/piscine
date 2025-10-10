#include <stdio.h>
int	is_div(int nb)
{
	int	i;

	i = 2;
	while ( i*i <= nb )
	{
		if(nb % i == 0)
			return (1);
		i++;
	}
	return (0);
}
int	ft_is_prime(int nb)
{
	if (nb <= 0 || nb == 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	if(is_div(nb))
		return (0);
	return (1);
}

int	main(void)
{
	printf("%i", ft_is_prime(98));
}
