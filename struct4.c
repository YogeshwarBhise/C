/*Nested Structure*/
//2nd way

#include<stdio.h>

struct Hello
{
	float f;
	int no;
	struct Demo
	{
		int i;
		int j;
	
	}dobj;
};

int main()
{
	struct Hello hobj;
	
	hobj.f = 10.11;
	hobj.no = 11;
	
	hobj.dobj.i = 21;
	hobj.dobj.j = 51;
	
	printf("i is %d\n",hobj.dobj.i);
	printf("f is %f\n",hobj.f);
	printf("%d",sizeof(hobj));
	return 0;
}