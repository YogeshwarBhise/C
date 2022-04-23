#include<stdio.h>

struct Demo
{
	int iNo;
	float fValue;
	char ch;
	//double dValue;
	int iValue;
	
};

int main()
{
	struct Demo obj1 = {20,50.10,22}; // 1st way of initialization
	printf("%d\n",obj1.iNo);
	
	struct Demo obj;// 2nd way of initialization
	obj.iNo = 11;
	obj.fValue = 10.11;
	obj.iValue = 21;
	//obj.dValue = 10.11;
	
	printf("%d\n",obj.iNo);
	printf("%d\n",sizeof(obj));
	return 0;
}