#include <stdio.h>
/* scope is a region of program where a defined variable can exist and beyond which it cannot be accessed.
Local variables are declared inside a function or a block of code; they cannot be accessed outside the function.  
The scope of these variables will be within the function only.
Global variables are defined outside a function.we can access them inside any of the functions defined for the program.
If the local and global variables have the same name, the local variable will take preference.
Formal parameters have precedence over global variables, and they are treated as local variables within a function. 

A static variable is known to retain the value even after they exit the scope, they preserve their value from previous
scope and are not initialize again in the new scope.
Static variable until the end of the program is kept in the memory.They can be defined inside or outside the function.
Static variables are initialized using constant literals. The default value of static variables is zero. 
syntax:- static data_type name = value;
*/ 

int myfunc()  
{  
    int b=10;
 static int i;//here by default it will consider i value as 0 and we can only initialize using constant not any other fuction.
  i++; //this new value will now be preserved in static variable. 
  return i;  
}
int a = 8;
static int p=67; //static global value
int main()  
{  
printf("Value:%d",myfunc()); 
printf("\nValue:%d",myfunc()); 
printf("\nValue of global variable a:%d\n",a); 
// printf("\nValue of local variable b:%d",b); this will throw error because b is a local variable in func()
int a=5;
printf("value of a is:%d\n",a); //local variable will take precedence over global variable.

//printf("value of i is:%d\n",i); //error because i is a static local variable.
printf("value of p is:%d\n",p); //here p is a static global variable.


    return 0; 
}