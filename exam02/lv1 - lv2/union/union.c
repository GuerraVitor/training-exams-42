#include <unistd.h>

int check(char *list, char c){
	int i = 0;
	while(list[i]){
		if(list[i] == c)
			return 1;
		i++;
	}
	return 0;
}

int main(int ac, char **av)
{
	if(ac == 3){
		char list[100] = {0};
		int i = 0;
		int l = 0;
		while(av[1][i]){
			if(!check(list, av[1][i])){
				list[l] = av[1][i];
				l++;
			}
			i++;
		}
		i = 0;
		while(av[2][i]){
			if(!check(list, av[2][i])){
				list[l] = av[2][i];
				l++;
			}
			i++;
		}
		i = 0;
		while(list[i]){
			write(1, &list[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
