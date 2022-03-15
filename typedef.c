#include <stdio.h>
/* typedef is a keyword in c used to give alternative name to a existing  data_type(structure).
syntax:- typedef <previous_name> <alias_name>;
*/
typedef struct student
{
    int id;
    char fav_sub;
    int marks;
    char name[];
} std ; 

//typedef can be used for providing a pseudo name to pointer variables as well.

int main()
{
    std s1,s2;
    s1.id=5;
    s2.id=6;
    printf("s1 id is %d and s2 id is %d\n", s1.id,s2.id);

    typedef int* ptr; //(if we write int* a,b; then for compiler a is pointer variable but b is not )
    ptr a, b;  //(here both are pointer variable now)
    int c=58;
    a=&c;
    b=&c;
    printf(" address of c is %d\n",a);
    printf(" address of c is %d\n",&c); 
    printf(" value of c is %d\n",*a); 
    printf(" value of c is %d\n",c); 
    printf(" address of c is %d\n",&a);
   
    return 0;
}