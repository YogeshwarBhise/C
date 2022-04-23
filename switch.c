//In a school
// 1 2 3 4 5 standard students are there 
//we need to let them know 
//their exam time 
//1  8
//2  9 
//3  10 
//4	 11			
//5	 12	
#include<stdio.h>
//using switch case
//bcoz all are conditions
int main()
{
	auto int iStd = 0;
	
	printf("Enter your standard: \n");
	scanf("%d",&iStd);
	
	switch(iStd)
	{
		case 1: 
		printf("Your exam is at 8am\n");
		break;
		
		case 2:
		printf("Your exam is at 9am\n");
		break;
		
		case 3:
		printf("Your exam is at 10am\n");
		break;
		
		case 4:
		printf("Your exam is at 11am\n");
		break;
		
		case 5:
		printf("Your exam is at 12noon\n");
		break;
	
		default:
		printf("Invalid standard !!\n");
		break; // no need to write break after default its an option
	}
	
	return 0;
}