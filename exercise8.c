#include <stdio.h>
#include <stdlib.h>
/*
    // Dynamic Memory Allocation
    // ABC Pvt Ltd. manages employee records of other companies.
    // Employee Id can be of any length and it can contain any character
    // For 3 employees, you have to take 'length of employee id' as input in a length integer variable.
    // Then, you have to take employee id as an input and display it on screen. 
    // Store the employee id in a character array which is allocated dynamically.
    // You have to create only one character array dynamically
// EXAMPLE:
    // Employee 1:
    // Enter no of characters in your eId
    // 45
    // Dynamically allocate the character array.
    // take input from user 

    // Employee 2:
    // Enter no of characters in your eId
    // 4
    // Dynamically allocate the character array.
    // take input from user 

    // Employee 3:
    // Enter no of characters in your eId
    // 9
    // Dynamically allocate the character array.
    // take input from user 
*/
int main()
{ int *pointer;
  int n;
  char a,b;
  for (int i = 1; i < 4; i++)
  {
     printf("for employee no. %d\n",i);
     printf("enter length of your employee id\t");
     scanf("%d",&n);
     getchar(); //without this programme will directly ask for b and assume enter as a input of a
     printf("enter your name first initial below\n");
     scanf("%c",&a);
     getchar();
     printf("enter your last name first initial below\n");
     scanf("%c",&b);
     pointer = (char *)malloc((n+1)*sizeof(int)); //+1 Because in string we need one space for null character also.
     printf("enter your employee id here \n");
     scanf("%s",pointer);
     printf("your employee id is %s\n",pointer);
     free(pointer);
  }
   //sometimes when you press enter it will be assume it as the input of next scanf so in that case 
   //getchar(); is used to consume one character .
    
    return 0;
}