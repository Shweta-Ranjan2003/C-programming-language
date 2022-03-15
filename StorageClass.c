#include <stdio.h>
#include "externEg.c" //now this files content can also be used here.
/* a storage class defines scope , default initial value and a lifetime of a variable.
 scope refers to the variable's availability at places. The initial default value refers to the value present in the
variables as default before being initialized, and the lifetime refers to the variable's duration of life.
the type of storage classes:-
1. Automatic variable(auto storage class):- (same as local variable)
scope:- local to the function body they are defined in
default value:- garbage value (a random value)
lifetime:-  till the end of the function block they are defined in
syntax:- int a; or auto int a; (its a by default type if not mentioned any other storage class explicitly)

2. External variables:- (same as global variable and can be changed by any other function in the program)
scope:- global to the program they are defined in.
default value:- 0
lifetime:- these variables are declared outside any function. they are available throughout the lifetime of the 
program.
syntax:- int a; (any variable declared outside any function is external variable)
Extern keyword:- used to inform our compiler that a given variable is declared somewhere else
using extern will not allocate space for the variable.
syntax:- extern int a;

3. Static variable:- (change value in the program,the program will store the new value, overwriting the previous one.)
scope:-local to the block they are defined in
default value:-0
lifetime:- available throughout the lifetime of the program
syntax:- static int a;

4. Register variable:-(it requests compiler to store variable in CPU register to have faster access) if there is
no space in cpu register then it is saved in local memory same as automatic variable.
scope:- local to the function they are declared in
default value:- garbage value
lifetime:- available till the end of the function block,they are defined in
syntax:- register int a;
*/
int a;
int p=45;
int func(int a,int b)
{ 
    auto int variable; //default value of local\automatic variable is garbage value 
    variable=a+b; 
    
    
    return variable;
}
int main()
{   
    int variable=func(a , 10); //a is a global variable hence can be used anywhere in any function but
                               //variable is a local variable in func thats why we have to define it here also.
    printf("value of variable is %d\n",variable);

    printf("default value of global variable is %d\n",a); //0
    printf("default value of global variable is %d\n",p); //45
    int p=67;
    printf("default value of global variable is %d\n",p); //67 

    printf("value of external variable is %d\n",externEg); //500 as written in externEg.c file.
    externEg=50;
    printf("value of external variable is %d\n",externEg); //50 because local variable will take precedence
    
    static int c; 
    printf("default value of c is %d\n",c); // we will get 0
    c++;
    c++;
    printf("default value of c is %d\n",c); // get 2 because change in static variable program overwrites its value.

    return 0;
}