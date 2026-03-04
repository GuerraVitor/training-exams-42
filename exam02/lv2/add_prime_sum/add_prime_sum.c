#include <unistd.h>

int ft_atoi(char *s){
	int n = 0;
	int i = 0;

	while(s[i]){
		if(s[i] < '0' || s[i] > '9')
			return (-1);
		n = n * 10 + (s[i] - '0');
		i++;
	}
	return n;
}

int is_prime(int n){
	int i = 2;
	if (n < 2)
		return 0;
	while(i <= (n / 2)){
		if(n % i == 0)
			return 0;
		i++;
	}
	return 1;
}

void put_nbr(int n){
	char c;
	if(n > 9)
		put_nbr(n / 10);
	c = ('0' + (n % 10));
	write(1, &c, 1);
}

int main(int ac, char **av){
	if (ac == 2){
		int n;
		int i = 2;
		int sum = 0;
	
		n = ft_atoi(av[1]);
		if (n <= 0){
			write(1, "0\n", 2);
			return 0;
		}
		
		while(i <= n){
			if (is_prime(i))
				sum += i;
			i++;
		}
		put_nbr(sum);
		write(1, "\n", 1);
		return 0;
	}
	write(1, "0\n", 2);
	return 0;
}
