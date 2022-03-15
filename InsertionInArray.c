#include <stdio.h>
#include <stdlib.h>
/* we can insert element in array by various ways like

1. we can make new array of size we require and copy each element of old array and add new element.
  (we can not simply add one array in old array because their might not be space 
  after its last element so we have to make new array at new memory location)
  
2. we can use reallocation meathod and add new element to it
  (reallocation will move whole array to new space in memory)
  
3. we can use linked list meathod:-With a linked list, we can store a list of values in different parts of memory:
  This is different than an array since its not store in contiguous memory .
  We can use whatever locations in memory that are free.
 When we want to insert a new value, we allocate enough memory for both the value we want to store,
  and the address of the next value: for eg if we want to store 
eg:- if we want 2 after 1 then we have to store pointer to adress of 2 next to 1
and next to last element of list we store null pointer.
running time of O(n) for search and best case running time of inserting or searching will be omega(1).
basic syntax:- typedef struct sllist  //as we have declare sllnode name at end we cant use here in start so
                                       its a another way to refer to this data type.
            {
                VALUE val;  //value means arbitary data type any int float etc.
                 struct sllist* next  //pointer to another same data type
             } sllnode;  // permanent name given here so now we can use sllnode instead of sllist
Node means a struct with same members that are data of some data type and pointer to another node of same type
*/
typedef struct node //We start this struct with typedef struct node so that we can refer to a struct node 
                    //inside our struct.
     {
         int number;
         struct node *next; // a pointer to the next node with struct node.
     }
     node;
int main()
{ 
    // meathod 1
    /*int *ptr;
    ptr=(int*)malloc(3*sizeof(int));
    if (ptr == NULL)
    {
        return 1;
    }
    ptr[0]=1;
    ptr[1]=2;
    ptr[2]=3;
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n",ptr[i]);
    }
    int *tmp = malloc(4 * sizeof(int));   //inserting element in array
    if (tmp == NULL)
    {
        free(ptr);
        return 1;
    }
      
    for (int i = 0; i < 3; i++)
    {
        tmp[i] = ptr[i];
    }
    tmp[3] = 4;
    free(ptr);
     ptr=tmp;  //now ptr will also start pointing to same memory location as tmp is . 
     for (int i =0 ;i<4;i++)
     {
     printf("%d\n",ptr[i]);
    }
    free(ptr); //Since ptr now points to the same chunk of memory as tmp, we can just call free(ptr).
    */
    //meathod 2
    /*int *ptr=malloc(3*sizeof(int));
    ptr[0]=1;
    ptr[1]=2;
    ptr[2]=3;
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n",ptr[i]);
    }
    int*tmp=realloc(ptr,4*sizeof(int));  //inserting a element in array 
    tmp[3]=4;
    //ptr=tmp;  can also do this and then print ptr values it will give same results 
                as both pointer are pointing to same.
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n",tmp[i]);
    }
    free(tmp); //you can free either of the pointer as both are pointing to same
                 memory location just dont free both because it may cause unusual behaviour.
     */
     
     //meathod 3 LINKED LIST
     node *list = NULL;
     node *n = malloc(sizeof(node)); //sizeof(node) allocate enough memory for both a value and a pointer
     if (n != NULL)
     {
         n->number = 1; //(*n).number = 1; Since n is a pointer, we need to go to the node there first,
                        // and then use the . operator to set a value.
         n->next = NULL;             
     }
    list = n; //Finally, our list needs to point to the node:
    //We want our list pointer to have the same address as n, since n is a temporary variable 
    //and we want our list variable to refer to it as the first node in our list.
    
    //growing linked list
    n = malloc(sizeof(node));
    if (n == NULL)
    {
        free(list); //If we somehow couldn’t allocate more memory, we’ll free the node in our list and exit.
        return 1;
    }
         n->number = 2;
         n->next = NULL;
     
     list->next = n; //since n is a temporary variable now update the pointer to point to our new n.
     n = malloc(sizeof(node));
     if (n == NULL)
     {
         free(list->next); //Notice that we need to free list->next, the second node,and then list, the first node
         free(list);
         return 1;
     }
     n->number = 3;
     n->next = NULL;
     list->next->next = n;
     //print list
     for (node *tmp = list; tmp != NULL; tmp = tmp->next)
     {
         printf("%i\n", tmp->number);
     }
     
     // Free list
     while (list != NULL)
     {
         node *tmp = list->next;
         free(list);
         list = tmp;
     }

     /*
     //Inserting new element
     Its easy to insert new element at the start and for that we have to allocate memory the add no. and
     at the next pointer we have to store address of linked list first element . 
     or if we want to insert an element in the middle of two element for eg if 1 is pointing to 2 
     and we want to insert 5 then first we have to make 1 pointing towards 5 and then 5 pointing 
     to 2.

     //Deleting linked list
     it works like stack(LIFO) means first we have to reach to null pointer(last node pointer) and we have
     to start deleting list from there.

     //deleting an element of linked list
     we want to delete an element in the middle of two element for eg if 1 is pointing to 2 and
     2 is pointing to 3 and we want to delete 2 then we first have to point 1 to 3 and then remove(free) 2.

     //Search through linked list
     create a traversal pointer pointing to the list's head then set the traversal pointe to the next pointer
     and if the current node's val is what we are looking for then report success and if reached end of the
     list and couldn't find then report failure.
     */

    //Doubly linked list
    /*in singly linked list we can only move in one direction .A doubly linked list allows us to move
    forward and backward through the list, all by adding one extra pointer to our struct definition
    that extra pointer will be pointing to previous element of the list
    */
    return 0;
}