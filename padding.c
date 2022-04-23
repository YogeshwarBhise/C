#include<stdio.h>
#pragma pack(1)

//pragma directive is used to change the memory aloocation size 
//the default size is 4 bytes but with pragma we could adjust the allocation size
//it can be changes to 1,2,4,8,16,32.
//differs as per compiler


struct hello
{
	int i;
	char ch;
	char c;
	float f;
	int j; 
};


struct Demo
{
	int i;
	char ch;
	float f;
	int j; 
	char c;
};

int main()
{
	printf("%d\n",sizeof(struct Demo));
	printf("%d\n",sizeof(struct hello));
	return 0;
}