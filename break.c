#include <stdio.h>
int main(int argc, char const *argv[])
{
    // break statement is used to bring programm contol out of loop or switchcase.
    //continue statement is used to bring the programm control to the next iteration(perform repeatedly) of loop.
    //continue statement skips some code inside the loop and continues with the next iteration.
    int i,age; 
	for(i = 0 ; i < 15 ; i++) 
	{ 

		printf("Iteration time = %d\nEnter Your Age : ",i ); 
		scanf("%d",&age); 
		if (age>10) 
		{ 
			break; // Checking Break Statement 
		} 
    }
	for(i = 0 ; i < 15 ; i++) 
	{ 

		printf("Iteration time = %d\nEnter Your Age : ",i ); 
		scanf("%d",&age); 
    	 if(age<10) 
		 { continue; } 
		 printf("Hey Guys\n"); 
		 printf("This code is printed coz if condition is not satisfied. \n"); 
		printf("Checking Continue Statement\n\n"); // Checking Continue Statement 
    }
	
    return 0;
}
