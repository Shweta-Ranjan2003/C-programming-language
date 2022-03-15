#include <stdio.h>
#include <stdlib.h>
/*static memory allocation is the process of allocation of memory space before the program execution.
Dynamic memory allocation is the process of allocation of memory space at the run time.( there is memory reusability)
Memory allocation in C can be divided into four segments:-
1. code:- Code composes of all the text segment of our program.
2. variable:- divided into 2 segments 
Data segment: stores initialized data i.e., data whose value is already given.
bss segment: stores uninitialized data i.e., data whose variable is initialized only.
3. stack:-The stack is a LIFO(last in first out) data structure. It's size increases when the program moves forward.
Stack overflow:-Compiler allocates some memory to stack but when it get exhausted situation its called stack overflow.
4. Heap:- Heap is a tree-based data structure. It’s size increases when we allocate memory dynamically.
For the allocation of memory using the heap, we have four functions:
1.  Malloc stands for memory allocation. it requests memory from the heap and returns a pointer to the memory.
we have to typecast the return value that is a void pointer to allocated memory however if space is insufficient then
allocation of memory fails and it returns null pointer,all the values at allocated memory are initialized to garbage value
syntax:- ptr = (ptr-type*) malloc(size_in_bytes);   //ptr-type means in whatever datatype you want to cast it.
int *ptr;
ptr = (int*) malloc (3* sizeof(int)); //using sizeof() because the size of int may differ in different systems
2. Calloc stands for contiguous allocation. same as malloc but the two differences are
it reserves n blocks of memory with the given amount of bytes.
all the value at allocated memory are initialized at 0
syntax:- ptr = (ptr-type*) calloc(n,size_in_bytes);
3. Realloc stands for reallocation . if the dynamically allocated memory is insufficient , we can change the size of
previously allocated memory using realloc function.
Syntax:- ptr = (ptr-type*) realloc(ptr,new_size_in_bytes);
4. Free is used to free the dynamically allocated memory.
Syntax:- free(ptr);

these 4 functions are defined under <stdlib.h>.
*/
//basically malloc calloc realloc returns the address of the required memory we ask for to the pointer
//it also works if we write it like this 
// int*ptr=malloc(n*sizeof(int));  there is no need of typecast here.
//valgrind is a command-line tool that we can use to run our program and see if it has any memory-related issues.
//We’ll run valgrind ./memory after compiling.
int main()
{
    //Use of malloc
     int *ptr;
     int n;
     printf("Enter the size of the array you want to create\n");
     scanf("%d", &n);
     ptr = (int *)malloc(n * sizeof(int));
     for (int i = 0; i < n; i++)
     {
         printf("Enter the value no %d of this array\n",i);
        scanf("%d", &ptr[i]);
     }
     for (int i = 0; i < n; i++)
     {
         printf("The value at %d of this array is %d\n",i, ptr[i]);
     }

    /*Use of calloc
    int *ptr;
    int n;
    printf("Enter the size of the array you want to create\n");
    scanf("%d", &n);

    ptr = (int *)calloc(n ,  sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n",i);
       scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array is %d\n",i, ptr[i]);
    }
    */

    //Use of realloc
    printf("Enter the size of the new array you want to create\n");
    scanf("%d", &n);

    ptr = (int *)realloc(ptr ,  n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the new value no %d of this array\n",i);
       scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The new value at %d of this array is %d\n",i, ptr[i]);
    }

    free(ptr);
    
    return 0;
     }
