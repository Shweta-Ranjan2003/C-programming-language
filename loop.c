#include <stdio.h>
int main(int argc, char const *argv[])
{
    //do while loop
    //syntax:- do{ //code to be executed} while (condition);
    //do while loop execute atleast once. and its a exit controlled loop
    int num, index=0;
    printf("enter a number\n");
    scanf("%d", &num);
    do
    {
        printf("%d\n", index+1);
        index=index+1;
    } while(index<num);

    do
    {
     printf("%d\n", num+1);
     num=num+1;
    } while (num<5);
    

    //while loop  (entry controlled loop)
    //syntax:- while(condition) {//code to be executed}

    int i=2;
    while (i<num)
    {
        printf("%d\n",i);
        i=i+2;
    }

    //for loop is used to iterate a statement or a part of a program several times.  (entry control loop)
    //syntax:- for(exp1;exp2;exp3){ //code to be run; }
    //working= exp1->print->exp3->exp2 check->print->exp3...........
    //expression1 is optional its intialization of a loop we can initialize more than one variable in exp1. and we can also intialize them before instead of in for loop.
    //exp2 is also optional but then can use break, exp2 is conditional exp it will decide loop to terminate.
    //exp2 can have more than one condition . loop will work till the condition becomes false , other condition will be treated as statement.
    //exp3 is used to update value(increment,decrement) of loop variable , its also optional.

   int p, j;
   for ( p = 0 , j=0; p<5; p++)
   {
       printf("%d %d\n",p,j);
   }
   
   for ( p = 0, j=0; p<5 ,j<3; p++,j++)
   {
       printf("%d %d\n",p,j);
   }
   
   for ( p = 0, j=0; p<5 ,j<3;)
   {
       printf("%d %d\n",p,j);
       p++,j++;
   }
   
    
    return 0;
}
