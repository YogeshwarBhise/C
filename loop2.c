#include<stdio.h>

int main()
{
	auto int no1 = 10;
	auto int no2 = 10;
	auto int ans1 = 0;
	auto int ans2 = 0;
	
	ans1 = no1--;   //post decrement
	printf("Value of ans1 %d\n",ans1);
	printf("value of no1  %d \n",no1);
	
	ans2 = --no2;   //pre decrement
	printf("Value of ans2 %d\n",ans2);
	printf("value of no2  %d \n",no2);
	
	return 0;
}


//10
//9
//9
//9
