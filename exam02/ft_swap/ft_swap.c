void ft_swap(int *a, int *b)
{
	int temp;
	temp = *a; //temp recebe o valor que esta sendo apontado por a
	*a = *b;	//local apotado por a recebe valor apontado por b
	*b = temp;	//local apontado por b recebe valor em temp
}
