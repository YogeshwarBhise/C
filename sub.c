#include<stdio.h>

int subtraction(int n1, int n2)
{
	int diff = 0;
	diff = (n1-n2);
	return diff; 
}

int main()
{
	int a = 10;
	int b = 2;
	int c = 0;
	
	c = (subtraction(a,b));
	
	printf("%d",c);
	
	return 0;
}