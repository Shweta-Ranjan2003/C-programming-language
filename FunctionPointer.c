#include <stdio.h>
/* Function pointer is a pointer that points to a function. it doesn't points to data it points to code
unlike normal pointer ,it do not allocate or de-allocate memory using function pointer.
Syntax- function_return_type(*Name_of_pointer)(function arguments list)  
1.We can declare a function pointer and assign a function to it in a single statement like this:
void (*function_ptr)(int) = &fun;
2.We can remove the ampersand(&) from this statement because a function name alone represents the function address.
void (*function_ptr)(int) = fun;

Function pointers are useful to implement callback functions.
it is used to pass a function to a function.
this passed function can again be called hence the name callback function.

*/

int sum(int a,int b)
{
    return a+b;
}
void sayhello(int (*pointer)(int,int))
{
    printf("hello user\n");
    printf("sum of 5 and 5 is %d\n",pointer(5,5)); //callback to sum function
}
int saybye(int (*fpointer)(int,int))
{
    printf("sum of 8 and 8 is %d\n",fpointer(8,8)); //callback to sum function
    printf("bye user\n");
    return 0;
}
int main()
{
    int(*fptr)(int,int); //declaring a function pointer.
    fptr=&sum; //or fptr=sum is also same. 
    int d = (*fptr)(5,6); //dereferencing a function pointer.
    printf("value of d is %d\n",d);

    //*****Callback function******
    sayhello(fptr);
    saybye(fptr);

    return 0;
}