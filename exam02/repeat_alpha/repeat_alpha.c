#include <unistd.h>

int main(int ac, char **av)
{
	if(ac == 2)
	{
		int j = 0;
		while(av[1][j])
			j++;
		while(j >= 0)
		{
			int i = 0;
			if(*av[1] >= 'a' && *av[1] <= 'z')
			{
				i = 0;
				while(i < *av[1] - 'a' + 1)
				{
					write(1, av[1], 1);
					i++;
				}
				av[1]++;
				j--;
			}
			else if(*av[1] >= 'A' && *av[1] <= 'Z')
			{
				i = 0;
				while(i < *av[1] - 'A' + 1)
				{
					write(1, av[1], 1);
					i++;
				}
				av[1]++;
				j--;
			}
			else
			{
				write(1, av[1], 1);
				av[1]++;
				j--;
			}
		}
	}
	write(1, "\n", 1);
	return 0;
}
