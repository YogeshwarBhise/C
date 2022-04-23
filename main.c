
#include"marvellous.h" // our own header file made by us.

//Entry point function
int main()
{
	struct Demo obj;
	
	printf("Inside Main!!\n");	
	printf("Value of Macro is: %d\n",MAX);
	printf("Size of structure is %d\n",sizeof(obj));
	fun();
	
	return 0;
}

void fun()
{
	printf("Inside fun");
}
