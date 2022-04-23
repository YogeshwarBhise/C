/*Nested Structure*/
//1st way

#include<stdio.h>

struct Demo
{
	int i;
	int j;
	
};

struct Hello
{
	int no;
	float f;
	struct Demo dobj;
};

int main()
{
	struct Hello hobj;
	struct Demo obj;
	hobj.f = 10.11;
	hobj.no = 11;
	
	hobj.dobj.i = 21;
	hobj.dobj.j = 51;
	
	printf("i is %d\n",hobj.dobj.i);
	printf("f is %f\n",hobj.f);
	printf("i is %d\n",sizeof(hobj));
	return 0;
}