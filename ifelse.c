#include <stdio.h>
int main(int argc, char const *argv[])
{
    // syntax:- if ( condition )     here, condition should be a boolean expression(true-1 or false-0)
   //            {statements;}
    // else {statements;}  (it is optional to use else with if . you can use only if in program if you want
    //                      to execute it when its true and not execute it when its false)
    // you can also use Nested if statement to place if statement inside another if statement.
    // syntax:- if(condition){statement; if(condition) {statement;}}
    int age;
    printf("enter your age\n");
    scanf("%d", &age);
    printf("you have entered %d as your age\n", age);
    
    if (age>=18)
    {
        printf("you can vote\n");
    }
    
     printf("enter your age\n");
    scanf("%d", &age);
    printf("you have entered %d as your age\n", age);
    if (age>=18)
    {
        printf("you can drive\n");
    }
    else{
        printf("you cannot drive\n");
    }
    
    printf("enter your age\n");
    scanf("%d", &age);
    printf("you have entered %d as your age\n", age);
    if (age>=18)
    {
        printf("you can drink anything");
    }
    else 
    if (age>=10)
    {
        printf("you can drink juice");
    }
    else 
    if (age>=5)
    {
        printf("you can drink water");
    }
    
    else{
        printf("you cannot drink");
    }
    return 0;
}
