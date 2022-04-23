#include<stdio.h>

struct demo
{
	int ino;
	float fvalue;
	int ivalue;
};


int main()
{
	struct demo obj1;
	/*obj1.ino = 50;
	obj1.fvalue = 50.50;
	obj1.ivalue = 5;
	*/
	//struct demo *p = &obj1;
	struct demo *p = NULL;
	p = &obj1;
	
	p->ino = 11; 
	p->ivalue = 21;
	p->fvalue = 10.11;
	
	printf("Address of obj1 is : %d \n",&obj1);
	printf("ivalue is : %d \n",p->ivalue);
	printf("ivalue is : %d \n",obj1.ivalue);
	return 0;
}