#include<stdio.h>

int Add(int num1, int num2) // Add is a function which accepts 2 parameters,
							//1st is integer and 2nd is also integer,
							//and that function(Add) returns Integer.
{							

		int total = 0;
		total = (num1 + num2);

		return total;  // return this whenevr Add function is called.
} 

int main() // main is a function which accepts nothing and returns integer.
{
	int A = 10;
	int B = 100;
	int C = 0; // clean the variable (garbage collection)

	C = Add(A,B);   // go to Add while taking the A and B as parameters both of type integer
	
	printf("%d",C);
	
	return 0;    // successful termination(msg for os that everything is okay)
}