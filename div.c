#include<stdio.h>

int division(int p, int q)
{
	int rem = 0;
	rem = (p/q);
	return rem;
}

int main()
{
	int f = 22;
	int g = 11;
	int h = 0;
	
	h = division(f,g);
	printf("%d",h);
	
	return 0;
}