#include<stdio.h>

struct Demo
{
	const int i;
	const int j;
	
};

int main()
{
	const struct Demo obj = {11,21};
	
	//obj.i = 11; error
	//obj.j = 21; error
	
	printf("%d\n",obj.i);
	printf("%d\n",obj.j);
	
	
	return 0;
}