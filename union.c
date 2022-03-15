#include <stdio.h>
#include <string.h>
/* union is also a user defined data type like structure , the difference is in structure each member has its own
 storage location whereas members of union uses a single shared memory location(which has size equal to its largest 
 data member ) here also we use member access operator(.) between union variable_name and member name.
syntax:-  union [union_name]  ([]this is not needed)
         {
             //data_type var1 (members of union)
             //data_type var2..
         }; (use ; here if u want to use it later in main function or write variable names then use ;)
         union_name variables; (or u can also define variables here and then use ; this)
*/
union first{
    int id;
    int marks;
    char fav_letter;
    char name[35];
} shweta;
int main()
{
    shweta.marks=50;
    shweta.id=1; //in union only one member can be active at a time like here except id rest is giving garbage value.
    strcpy(shweta.name , "pro");
    shweta.fav_letter='s';


    printf("id is %d\n",shweta.id);
    printf("marks are %d\n",shweta.marks);
    printf("fav_letter is %c\n",shweta.fav_letter);
    printf("name is %s\n",shweta.name);

    //altering the value of any member will affect other member's values.
    /*a common memory block is shared by all the items of an union.
❑ The size of the memory block is equal
to the largest size, among all the items
of an union.
❑ So for union A, a 4 bytes (sizeof int =
4) memory block is shared among the
its item.
❑ So for union B, a 10 bytes (sizeof char str[10] = 10) memory block is shared among
the its item.
❑ SO the above program will print 4 and 10 as the sizeof union A and B.
    */
    
    return 0;
}