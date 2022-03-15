#include <stdio.h>
    /*Functions are used to divide a large C program into smaller pieces.
     Functions are also called as procedure or subroutines.
     Function is nothing but a group of code put together and given a name 
     and it can be called anytime without writing the whole code again and again in a program.
     There are 3 aspects of function :-

    Declaration- A function is declared to tell the compiler about its existence.
    Definition-A function is defined to get some task done. (It means 
    when we define function we write whole code of that function. In this actual implementation of function is done.)
    Call-A function is called in order to be used.
    There are 2 types of function- library(pre-defined like printf,scanf),user defined(created by programmer).
    
     syntax:- return_type function_name(data type parameter1,data type parameter2...){//code to be executed}
     void means it will not return any value.
     */

    //1. With arguments and with return value
    int multiply(int a , int b); //declaration  (use this ; after declaraion if going to define it later)

    //2. without arguments and with return value
     float takenumber() //declaration
    {
        float k,l;
         printf("type no. 1: \t");
        scanf("%f",&k);
        printf("type no. 2: \t");
        scanf("%f",&l);
        return (float)k+l; //definition
        }

    //3. with arguments and without return value
    void printstar(int n); //declaration

    //4. without arguments and without return value
     void stars(void) //definition 4.
        {
            int m;
             printf("how many star u want to print:\t");
        scanf("%d", &m);
        for (int p = 0; p < m; p++)
        {
            printf("*\n");
        }
        }

    int main()
    {
        int a,b,c;
        a=5;
        b=5;
        c=multiply(a,b); //call 1.
        printf("product of a and b is %d\n", c);

        
        float f;
        f=takenumber(); //call 2.
        printf("addition of 2 number is %4.2f\n", f);
        
        printstar(7); //call 3.
        printf("\n");
       
        stars(); //definition 4.
       
        return 0;
        
    }
    int multiply(int a , int b)
    { 
        return a*b; //definition
    }
    void printstar(int n)
    {
    for(int i = 0; i < n; i++)
    {
         printf("%c", '*'); //definition
    } 
    }
   