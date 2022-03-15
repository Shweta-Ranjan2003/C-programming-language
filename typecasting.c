#include <stdio.h>
int main(int argc, char const *argv[])
{
    //typecasting is used to convert one data type in other data type.
    //syntax :- (type) value; 
	int a; 
	float b; 
	char c; 
	printf("Enter the value of a\n"); 
	scanf("%d",&a); 
	printf("A is %d\n", a); 
	printf("Enter the value of b\n"); 
	scanf("%f",&b ); 
	printf("B is %d\n", (int) b); 
	printf("Type any character : \n"); 
	scanf(" %c",&c ); 
	printf("Character is %c\n", c); 

	float p= (float)54/5; 
    //we have to explicitly mention float here because in c arithmetic operation between 2int gives by default int.
	printf("The Value of p is %f\n", p );
    return 0;
}
