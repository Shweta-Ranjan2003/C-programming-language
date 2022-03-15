#include <stdio.h>
/* when a function is called, the values(expression) that are passed in the call are called arguments or Actual parameter.
   Formal parameters are local variable which are assigned values from the arguments when the function is called.
   (for eg we have function int add(int a,b){return a+b}; 
   int main() int x,y; c=add(x,y); so when we will call it x,y will be actual arguments and a copy of them will be
   assigned to function that will be local/formal parameter.)(if a cheats from b then b's copy is AA and a's
   copy is FP, even if a changes something in FP there will be no change in AA)
   Types of function call:-
 1. call by value:-each of the actual arguments in the calling function is copied into corresponding formal arguments
  of the called function (there will be no change in AA if FP is changed)
 2. call by reference:- the addresses of actual arguments in the calling function are copied into formal arguments
  of the called function. (here we can change AA by changing FP)
*/

// 1. call by reference
int swap(int* x,int *y) //it will only accept address value of int (eg:- accept &a and not a)
{
  int p;
  p=*x; //value of a (at actual address of a) is now stored in p
  *x=*y; //value of y is now stored in a(at address of a)
  *y=p; //value of p is now stored in y
}
int main()
{
    int a=45,b=10;
    printf("value of a is %d and b is %d\n",a,b);
    swap(&a,&b); //call by reference
    printf("value of a is %d and b is %d\n",a,b);
    return 0;
}