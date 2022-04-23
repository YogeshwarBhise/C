#include<stdio.h>

int main()
{
	int no = 11;
	//array is one dimentional which contains 5 elements, and each element is of type integer.
	
	int arr[5]; //defination of array
	
	//array member initialization
	// array member by member initialization
	arr[0] = 10;
	arr[1] = 51;
	arr[2] = 101;
	arr[3] = 102;
	arr[4] = 104;

	printf("Array 1 is as follows ");
	
	//Member initialization list
	int brr[5] = {45,51,111,12,14};
	
	
	int crr[] = {45,63,23,56,89};
	//int drr[]; gives error bcoz compiler needs size or data atleast something
	
	return 0;
}