#include<stdio.h>

int main()
{
	int no = 10;
	
	int *p = &no;
	printf("the value of no is %d \nAnd is stored at %d Location\n", no,p);
}

//dont use *p in printf it returns the value of no
//use p in printf it returns the memory location of no. 