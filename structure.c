#include <stdio.h>
#include <string.h>
/* structure is user defined data types in c it is usually used when we want to store dissimilar data together.
Structure elements are always stored in contiguous memory locations
syntax:- struct [structure_name]  ([]this is not needed)
         {
             //data_type var1 (members of structure)
             //data_type var2..
         }; (use ; here if u want to use it later in main function or write variable names then use ;)
         structure_name variables; (or u can also define variables here and then use ; this)
in array we use subscipt value([]) here we use dot operator(.) its called structure member operator.
to access the members of the structure we use dot between structure_variable name and member name 

we use this operator(.) to go inside of structure and (*) to go the address of it so there is 
a synthetic sugar(shorthand notation) for them (->)to access fields in a structure pointed to by a pointer
*/

struct student
{
    int id;
    char fav_sub;
    int marks;
    char name[];
} /*variables;*/ ; 
//struct student shweta,shubham,amit,abhishek; //here its a global variable and can be called anywhere.

int main()
{
    struct student shweta,shubham,amit,abhishek; //local variable ,cant be called outside main funct.
    shweta.id=1;
    shubham.id=2;
    amit.id=3;
    abhishek.id=4;
    shweta.fav_sub='m';
    shubham.fav_sub='a';
    amit.fav_sub='p';
    abhishek.fav_sub='e';
    shweta.marks=80;
    shubham.marks=75;
    amit.marks=50;
    abhishek.marks=95;
    printf("shweta id is %d and subject is %c and marks is %d\n",shweta.id,shweta.fav_sub,shweta.marks);
    printf("shubham id is %d and subject is %c and marks is %d\n",shubham.id,shubham.fav_sub,shubham.marks);
    printf("amit id is %d and subject is %c and marks is %d\n",amit.id,amit.fav_sub,amit.marks);
    printf("abhishek id is %d and subject is %c and marks is %d\n",abhishek.id,abhishek.fav_sub,abhishek.marks);

    strcpy(shweta.name, "powerful programmer");
    printf("shweta is a %s\n",shweta.name);
    
    
    return 0;
}