#include<stdio.h>

int main()
{
	//no1 is a variable of type integer
	//initialized with 10.	
	int no1 = 10;
	
	//no1 is a variable of type integer constant
	//initialized with 10.
	const int no2 = 10;
	
	//Arr is one dimensional array which contains 
	//4 elements each of type integer
	int Arr[4] = {10,20,30,40};
	
	//Arr is one dimensional array which contains 
	//4 elements each of type integer constant
	const int Brr[4] = {10,20,30,40};
	
	no1++;  //+1
	//no2++;  //+1
	
	printf("%d\n",no1);
	printf("%d\n",no2);
	
	Arr[0] = 11;
	//Brr[0] = 11;
	
	
	
	return 0;
}