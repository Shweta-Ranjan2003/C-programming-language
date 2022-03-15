#include <stdio.h>
#define PI 3.14
int main(int argc, char const *argv[])
{
     // Declaration - Telling the compiler about the variable (No space reserved)
    // Definition - Declaration + space reservation
    //ram is the memory where program gets load .
    //Variable is a name given to memory location.
    //Variable is declared by TYPE VARIABLE_NAME; (eg int a,b;)
    //We can also intialized and declare at same time like int a=5;
    //rules for defining variable are :- it can contain digit,alphabet,underscore.(char _sr22,float _5,) 
    //It can't start with digit. No whitespace or keyword allowed. (int load, char 9 dr are incorrect)

    //constant are fixed value that cant be changed .
    int a=5;
    const int b=10;
    printf("%d\n",a+b);
     a=2;
    b=10;
    printf("%d\n",a+b);
    //here we can change a but not b because its a constant.
    printf("%f\n",PI);
    PI=5;
    printf("%f\n",PI);
    //cannot run because PI was a #define preprocessor constant.

    return 0;
}
