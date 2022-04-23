#include<stdio.h>
#include<string.h>

int strlenX(char str[])
{
	int iCnt = 0;
	int iLength = 0;
	
	for(iCnt = 0;str[iCnt]!='\0';iCnt++)
	{
		iLength++;	
	}
	return iLength;
}

int strlenXX(char str[])
{
	int iCnt = 0;
	int iLength = 0;
	
	while(str[iCnt] != '\0' )
	{
		iCnt ++;
		iLength++;		
	}
	return iLength;	
}
////////////////////////////////////////////////////
//
//function name: strlenXXX 
//Input:         Address of character array  
//Output:		 Length string in integer   	
//description:   used to calculate length string 
//Author:        Yogeshwar
//Date:          06/03/2022  
//
////////////////////////////////////////////////////
int strlenXXX(const char *str)
{
	int iCnt = 0;
	while((*str)!='\0')
	{
		printf("%c\n",*str);
		iCnt++;
		str++;
	}
	return iCnt;	
}

int main()
{
	char Arr[20] = {'\0'};
	
	printf("Enter Your Name: \n");
	scanf("%s",Arr);
	
	printf("Entered Name is: %s\n",Arr);
	
	int iRet = 0;
	int iRet1 = 0;
	int iRet2 = 0;
	
	iRet   =strlenX(Arr);
	iRet1  =strlenXX(Arr);
	iRet2  =strlenXXX(Arr);

	printf("string length : %d\n",iRet);
	printf("string length : %d\n",iRet1);
	printf("string length : %d\n",iRet2);
	
	
	
	return 0;	
}