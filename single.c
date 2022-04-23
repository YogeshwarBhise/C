#include<stdio.h>

int main()
{
	auto int Arr[4];
	auto int Brr[4] = {10,20,30,40};
	
	int Crr[4] = {31,32};// initialized but index 2 and 3 has 0 assured
	
	int Drr[4];
	Drr[0] = 10;
	Drr[1] = 20;
	
	return 0;
}