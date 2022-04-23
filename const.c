#include<stdio.h>

const int A = 100;  // Global constant

int main()
{
	int no1 = 10;
	
	const int no2 = 20; // Local Constant
	
	no1++;
//	no2++; not allowed
	
	no1 = 20;
	//no2 = 200; not allowed
	
	printf("%d",no1);
	printf("%d",no2);
	return 0;
}