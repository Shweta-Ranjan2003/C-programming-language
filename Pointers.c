#include <stdio.h>
/* pointers is a variable which stores the address of another variable. can be of type char,arrays,int etc.
size for 32bit is 2bytes. and pointer is declared using *
diff in & and *
the address of operator &(Referencing Operator) returns the address of a variable. (&=address of).
* is the (dereference operators) (also called as indirection operator)used to get the value at a given address
p points to a means p is a pointer variable which stores address of a.
*/
int main()
{
    int a=75;
    int* pointerA = &a;
    int* ptr = NULL;
    int* ptr2;
    printf("the address of a is %p\n", &a);
    printf("the address of a is %p\n", pointerA); //it will show address of a 
    printf("the address of pointerA is %p\n", &pointerA); 
    printf("the value of a is %d\n", a);
    printf("the value of a is %d\n", *pointerA); // it will show value of a
     printf("the address of ptr is %p\n", ptr);  //it will give 0000
     printf("the address of ptr is %p\n", &ptr); 
     printf("the address of ptr2 is %p\n", ptr2); //it will give garbage value 
     printf("the address of ptr2 is %p\n", &ptr2); 
    return 0;
}
/*USES
.      Dynamic Memory Allocation
·      Arrays, Functions and Structures
·      Return multiple values from a function
·      Pointer reduces the code and improves the performance
*/