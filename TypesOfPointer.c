#include <stdio.h>
#include <stdlib.h>
/*1. void pointer:- has no data type associated , can easily be typecasted to any other pointer type.
its a general purpose pointer variable.
eg. int x=10;
    char y='r';
    void *ptr=&x; (it will store address of x)
    ptr=&y; (now it will store address of y)
C does not allow void pointers to be dereferenced directly but we can derefrence once we typecast it. 
We cannot use pointer arithmetic with void pointers.
2. Null pointer:- it is not pointing to any memory location.It generally points to NULL or 0th memory location
An uninitialized pointer means that the pointer occupies a garbage value that may point to some memory location.
 So to be on the safe side, NULL pointers are preferred. we should not dereference null pointer. As it will cause segmentation fault.
 Advantages:
We can initialize the pointer variable without allocating any specific address to it.
We can use it to check whether a pointer is legitimate or not. We can check that by making the pointer a NULL pointer, after which it can not be dereferenced. 
It is used for comparison with other pointers to check whether they are pointing to some memory address or not. 
We use it for error handling in the case of C programming.
We can pass a NULL pointer at places where we do not want to pass a pointer with a valid memory address.
Null macro is defined as ((void*)0) in header files of most of the compiler implementation.
Null pointer is a value whereas void pointer is a type.
3. Dangling pointers:-pointers that are pointing to a memory location that has been freed or deleted.
causes of dangling pointers-
 deallocation of memory- When memory is deallocated, the pointer keeps pointing to freed space.
 returning local variables in function calls
 variable going out of scope.
4. Wild pointer:- uninitialized pointer are called wild pointer .
these pointer points to some arbitary location in memory and may cause program crash or behave badly.
dereferencing wild pointer may cause nasty bugs.
suggested to initialized unused pointer to null.
5. constant pointer :- when a pointer is set to be constant then you cannot change the variable whose
  address the pointer is storing.
*/

int *mydangle(){
    int d=8; //here d is a local variable
    return d;
}
int main()
{
    //constant pointer.
    int numb1=10,numb2=20;
    int *const ptr1= &numb1;
    printf("%d\n",*ptr1); //10
    numb1=15;
    printf("%d\n",numb1); //15
    printf("%d\n",*ptr1); //15
    //ptr1=&numb2;          //this you can't do because its constant pointer.
    //printf("%d\n",*ptr1);


    //void pointers.
    void *ptr;
    int a=59;
    float b=6.7;
    ptr=&a;
    printf("address of a is %d\n",&ptr); 
    printf("address of a is %d\n",&a); 
    printf("address of a is %d\n",ptr); //typecasting is not needed for printing address. 
    //printf("value of a is %d\n",*ptr); //for dereferencing a void pointer we have to typecast.
    printf("the value of a after derefrencing is %d\n", *((int*)ptr));
    ptr=&b;
    printf("the value of b after derefrencing is %2.1f\n", *((float*)ptr));
     
    //Null pointers.
    int c=5;
    int *pointer=NULL;
    printf("the address of null pointer is %d\n",pointer); //0
    //printf("the value of null pointer is %d\n",*pointer); //program will not run and cause crashes. 
    pointer=&c;
    printf("the address of c is %d\n",pointer);
    printf("the value of c is %d\n",*pointer); //5

    //dangling pointer.
    int *ptrr= (int*)malloc(sizeof(int)); //eg of deallocation of memory
    free(ptrr); //ptrr now becomes a dangling pointer
    ptrr=NULL;  //ptrr no longer dangling. its a null pointer now.

    int *dangling = mydangle(); //pointer points to invalid location (dangling pointer).

    printf("the value of d in mydangle function is %d\n",*dangling); // after function is runned
                                                                     // all local variable gets destroyed/deleted.

    int *scopeeg;
    {               //scope starts
        int e=5;
        scopeeg=&e;
    }              //scope ends
    //pointer scopeeg is now a dangling pointer because e has gone out of scope.
    printf("%d",*scopeeg);      //will not run this .   

    int *wild; //it is uninitialized so it is a wild pointer.
    // *wild=45;//bad thing to do it will crash your program.
    int f=5;
    wild=&f; //its no longer a wild pointer.    
                               
    return 0;
}