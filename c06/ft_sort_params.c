
#include <unistd.h>
int	strcmp(char *str1, char *str2)
{
	int	i;
	int	j;

	i = 0;
	while (str1[i] && str2[i])
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (str1[i] - str2[i]);
}

void	my_sort(char **argv, int argc)
{
	int	i;
	int	j;
	char	*c;

	i = 1;
	while (argv[i])
	{
		j = 1;
		while (j + 1 < argc)
		{
			if (strcmp(argv[j], argv[j + 1]) > 0)
			{
				c = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = c;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	my_sort(argv, argc);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}	
		write(1, "\n", 1);
		i++;
	}
}
