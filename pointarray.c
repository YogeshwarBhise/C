#include<stdio.h>

int main()
{
	int Arr[5] = {10,20,30,40,50};
	
	int *p = &(Arr[0]);
	int *a = &(Arr[3]);
	int *q = &(Arr[4]);
	
	printf("p %d\n",p);
	printf("a %d\n",a);
	printf("q %d\n",q);
	
	return 0;
}