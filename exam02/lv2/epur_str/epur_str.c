#include <unistd.h>

int ft_isspace(char c){
	if(c == ' ' || c == '\t')
		return 1;
	return 0;
}


int main(int ac, char **av){
	if (ac != 2){
		write(1, "\n", 1);
		return 0;
	}
	int i = 0;
	while(ft_isspace(av[1][i]))
			i++;
	while(av[1][i]){
		while(av[1][i] && !ft_isspace(av[1][i])){
			write(1, &av[1][i], 1);
			i++;
		}
		while(ft_isspace(av[1][i]))
			i++;
		if(av[1][i])
			write(1, " ", 1);
	}

	write(1, "\n", 1);
	return 0;
}
