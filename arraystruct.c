/*array within a structure*/

#include<stdio.h>

struct Demo
{
	int Arr[3];
	float Brr[2];
};

int main()
{
	struct Demo obj;
	
	obj.Arr[0] = 10;
	obj.Arr[1] = 20;	
	obj.Arr[2] = 30;
	
	obj.Brr[0] = 10.11;
	obj.Brr[0] = 20.11;
	
	//obj.Arr[3] = {10,20};
	printf("value of arr[2] is %d\n",obj.Arr[2]);
	
	printf("size of struct Demo: %d \n",sizeof(obj));
	printf("value of arr[2] is %d\n",obj.Arr[2]);
	return 0;
}