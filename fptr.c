/*Yogeshwar Bhise
Function Pointer
*/

#include<stdio.h>

int Addition(int no1, int no2)
{
	int ans = 0;
	ans = no1 + no2;
	return ans;
}

int main()
{
	int a =10,b = 20;
	int ret = 0;
	int ress = 0;
	
	ret = Addition(a,b);
	
	printf("Addition through direct call is %d\n",ret);
	
	int (*fptr)(int ,int);
	
	fptr = Addition;
	
	ress = fptr(a,b);
	printf("Addition through function pointer call is %d\n",ress);
	printf("Address of addition function on text section is  %d\n",Addition);
	return 0;
}




//int Addition(int,int);
//Addition is a function which Accepts 2 parameters
//both integer
//and returns integer
