
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = power;
	result = 1;
	if (power < 0)
		return 0;
	if (power == 0 || nb == 1)
		return 1;
	if (nb == 0)
		return 0;
	while ( i > 0)
	{
		result *= nb;
		i--;
	}	
	return result;
}
int main(void)
{
	printf("%i\n", ft_iterative_power(2, 3));
	printf("%i\n", ft_iterative_power(2, 0));
	printf("%i\n", ft_iterative_power(5, 5));
}
