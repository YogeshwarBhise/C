#include<stdio.h>

int main()
{//				0	1	2	3	4	5	6
	enum Days{Sun,Mon,Tues,Wed,Thur,Fri,Sat};
	
	enum Days obj;
	
	obj = Tues;
	
	printf("%d\n",obj);
	printf("%d\n",sizeof(obj));
	
	int Input = 0;
	
	enum Gender{Male=1,Female=2};
	
	printf("Enter Your Gender:- \n");
	printf("1.Male\n");
	printf("2.Female \n");
	printf("3.Invalid \n");
	
	scanf("%d",&Input);
	
	switch(Input)
	{
		case Male:
			printf("Tax free Limit is 2,50,000\n");
			break;
		case Female:
			printf("Tax free Limit is 3,00,000\n");
			break;
		
		default:
			printf("Invalid Gender!!!\n");
			break;
	}
	return 0;
}