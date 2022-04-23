#include<stdio.h>


int main()
{
	auto int no = 20;
	
	int arr[5] = {10,20,30,40,50};
	
	int brr[5];
	
	brr[0] = 100;
	brr[1] = 11;
	brr[2] = 12;
	brr[3] = 13;
	brr[4] = 14;
	
	printf("no is %d\n",no);
	printf("address of no is %d\n",&no);
	printf("size of no is %d\n",sizeof(no));
	printf("1st value in arr is %d\n",arr[0]);
	printf("1st value in brr is %d\n",arr[0]);
	printf("address of arr is %d\n",arr);
	printf("address of brr is %d\n",brr);
	
	printf("size of arr is %d\n",sizeof(arr));
	printf("size of brr is %d\n",sizeof(brr));
	
	return 0;
}