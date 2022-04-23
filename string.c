#include<stdio.h>
#include<string.h>

int main()
{
	char Arr[5] = {'a','b','c','d','\0'};
	
	char Brr[5] = "abcd";
	
	printf("%s\n",Arr);
	printf("%s\n",Brr);
	
	printf("%c\n",Arr[0]);
	printf("%c\n",Arr[1]);
	printf("%c\n",Arr[2]);
	printf("%c\n",Arr[3]);
	printf("%c\n",Arr[4]);
	
	printf("size of string Arr is %d\n",sizeof(Arr));
	printf("size of string Brr is %d\n",sizeof(Brr));
	
	printf("Length of string Arr is %d\n",strlen(Arr));
	printf("Length of string Brr is %d\n",strlen(Brr));

	
	
	return 0;
}