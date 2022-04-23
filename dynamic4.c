/*Dynamic Memory Allocation in C realloc*/
/*Dummy code to understanf concept of realloc*/
/*Realloc can be used to allocate fresh memory as well*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr = NULL;
	ptr = (int *)realloc(NULL,5*sizeof(int)); // It behaves like malloc
	
	realloc(ptr,0); //It behaves like free
	
	return 0;
}