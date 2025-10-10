
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if(nb <= 0)
		return (0);
	while ( (i*i) <= nb)
	{
		if (i*i == nb)
			return (i);
		i++;
	}
	return (0);
}

int main(void)
{
	printf("%i\n", ft_sqrt(4));
	printf("%i\n", ft_sqrt(25));
	printf("%i\n", ft_sqrt(144));
}

