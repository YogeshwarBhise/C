#include<stdio.h> //#- preprocessor director , 

int Addition(int no1, int no2)
{
	int ans = 0;  //clean the variable by assigning 0.
	ans = (no1+no2);
	
	return ans;

}

int main()
{
	int A = 20;
	int B = 50;
	int C = 0;   //clean the variable by assigning 0.
	
	C = Addition(A,B);
	printf("%d",C);

	return 0;
} 

