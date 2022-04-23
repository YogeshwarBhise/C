#include<stdio.h>

int multiplication(int v, int n)
{	
	int mul = 0;
	mul = (v*n);
	return mul;
}	

int main()
{
	int x = 10;
	int y = 10;
	int z = 0;

	z = multiplication(x,y);
	printf("%d",z);

	return 0;
}