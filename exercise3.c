#include <stdio.h>
// Fibonacci series of no. 42 using both iterative and recursive logic.

   int  fib_recursive(int n )  //it gives the value of that nth term of fibonacci series
   {
      if (n==1 || n==2)  //1st term of series is 0 and 2nd term is 1.
      {
          return n-1;
      }
      else
      {
          return fib_recursive(n-1)+fib_recursive(n-2);
      }
   }
    int fib_iterative(int n)
    {
        int a=0,b=1;
        for (int i = 0; i < n-1; i++)
        {
            b=a+b; //in 1st iteration it will be 1
          a=b-a; //1
        }
        return a;
    }
   
   int main()
   {
       int n ;
       printf("enter index to get fibonacci series\n");
       scanf("%d", &n);
       printf("fibonacci series of %d by iterative approach is \t %d\n",n, fib_iterative(n)); //it will take less time
       printf("fibonacci series of %d by recursive approach is \t %d\n",n, fib_recursive(n)); 
       //recursive take more time because of recursive tree and repeatition of no.
       return 0;
   }