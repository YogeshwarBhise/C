#include<stdio.h>

int Addition(int no1, int no2)
{
	int ans = 0;
	ans = no1 + no2;
	
	return ans;
	
}
int main()           // entry point function
{
	int A = 10;
	int B = 11;
	int C = 0;       // clean the memory by allocating 0.
	
	C = Addition(A,B); // means go to addition function taking a and b as arguments
	
	printf("%d",C);
	return 0;
}