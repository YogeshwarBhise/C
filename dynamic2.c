/*Dynamic Memory Allocation in C calloc*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	//int Arr[5]; //static memory allocation
	int *ptr = NULL;
	int size = 0;
	
	printf("Enter number of elements that you want to allocate\n");
	scanf("%d",&size);
	
	ptr = (int *)calloc(size , sizeof(int)); //Allocate memory
	if(ptr == NULL)
	{
		printf("Unable to allocate memory \n");
		
	}
	else
	{
		printf("Allocated Memory Successfully \n");
		
	}
	//use the memory

	free(ptr); //free memory
	return 0;
}