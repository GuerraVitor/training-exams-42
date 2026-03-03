#include <stddef.h>

size_t ft_strcspn(const char *s, const char *reject){
	size_t n = 0;
	size_t j = 0;
	while(s[n] != '\0'){
		j = 0;
		while(reject[j] != '\0'){
			if(s[n] == reject[j])
				return n;
			j++;
		}
		n++;
	}
	return n;
}
