#include<stdio.h>

int main()
{
	int Arr[5] = {10,20,30,40,50};
	
	int *p = &(Arr[0]);
	int *q = &(Arr[4]);
	
	printf("Value of p before increment is : %d\n",p);
	p++; // only increment no post bcoz no variable to store 
	//p = p + 1
	//p = p + 1*sizeof(int)
	//p = p + 1*4
	//p = 100 +	4   //hypothetical values   
	//p = 104

	printf("Value of p after increment is : %d\n",p);
	
	
	printf("Value of q before decrement is : %d\n",q);

	q--;
	//q = q - 1
	//q = q - 1*sizeof(int)
	//q = q - 1*4
	//q = 116 -	4   //hypothetical values   
	//q = 112
	printf("Value of q after decrement is : %d\n",q);
	
	return 0;
}



// no++; means no = no + 1;