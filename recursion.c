#include <stdio.h>
/*Recursion is a process when a function calls a copy of itself to work on smaller problems.
Any function which calls itself is called recursive function.
A termination condition is imposed on such functions to stop them executing copies of themselves infinitely.
Any problem which can be solved recursively can also be solved iteratively.
eg. Hanoi, Fibonacci series, factorial finding etc.
The case at which the function doesn’t recur is called the base case.
*/
int factorial(int number)
{
	if (number ==1 || number == 0)
	{
		return 1; //(return_type should match with return value here it was int  so here we wrote return 1)
	}
	else
	{
		return number*factorial(number-1);	/*Recursion of Function:-if we give number=5,then here it will
		be 5*factorial(5-1) which is 4 now function called itself in next step it will 4*factorial(3) it will 
		repeat till 1 .*/
	}
}
int fun(int x)
{
	if (x==4)
	return x;
	else return 2*fun(x+1);
}

int main()
{
	int num;
	printf("Enter a no. :");
	scanf("%d", &num);
	printf("\nThe factorial of %d is %d\n", num, factorial(num));

	printf("%d\n",fun(2)); //16
    

	return 0;
}