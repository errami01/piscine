
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return 0;
	if (power == 0 || nb == 1)
		return 1;
	if (nb == 0)
		return 0;
	return nb * ft_recursive_power(nb, power - 1);
}
int main(void)
{
	printf("%i\n", ft_recursive_power(2, 3));
	printf("%i\n", ft_recursive_power(2, 0));
	printf("%i\n", ft_recursive_power(5, 5));
}
