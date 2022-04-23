#include<stdio.h>

struct Demo
{
	int i;
	int j;
	struct Demo *obj; //allowed
	//self refrencial structure
	//struct Demo obj; //not alloawed
	
};


int main()
{
	
	return 0;
}