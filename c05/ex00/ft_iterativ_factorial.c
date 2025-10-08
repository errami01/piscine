
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	result = 1;
	i = nb;
	if(nb < 0)
		return 0;
	if (nb <= 1)
		return 1;
	while (i > 0)
	{
		result *= i;
		i--;
	}	
}

int main(void)
{
	printf("%i\n", ft_iterative_factorial(5));
	return (0);
}
