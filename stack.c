#include<stdio.h>
/////////////////////////////////////////////////
//
//Function name: Addition 
//Input: Two integer
//Output: Integer
//Description: It is used to perform Addition
//Author: Yogeshwar Pandurang Bhise
//Date: 05/03/2022 
//
/////////////////////////////////////////////////
int Addition(int iNo1, int iNo2)
{
	auto int iAns = 0;
	iAns = iNo1 + iNo2;
	return iAns;
}
/////////////////////////////////////////////////
//Entry Point Function
/////////////////////////////////////////////////
int main()
{
	auto int iValue = 0,iValue2 = 0;
	auto int iRet = 0;
	
	printf("Enter first number\n");
	scanf("%d",&iValue);
	
	printf("Enter second number\n");
	scanf("%d",&iValue2);
	
	iRet = Addition(iValue,iValue2);
	printf("Addition is %d\n",iRet);
	
	return 0;
}