#include<stdio.h>

int main()
{
	int Arr[5] = {10,20,30,40,50};
	
	int *p = &(Arr[0]);
	
	int *q = &(Arr[4]);
	
	printf("value of p %d\n",p);
	
	//p+3;
	p = p+3;
	
	printf("value of p %d\n",p);
	q-3;
	printf("value of q %d\n",q);
	q = q-3;
	printf("value of q %d\n",q);
		
	printf("number of elements between p and q are : \n", q-p);
		
		
		
		
		
		return 0;
}