#include <stdio.h>
#define PI 3.14 //constant_name value
#define area_of_circle(r) (r*r) //constant_name (expression)
/* Pre-Processoring -> compiler -> Assembly -> Linking.
1. pre-Processor:- it comes under action before the actual compilation process, it is not a part of the c compiler,
it is a text substitution tool , all preprocessor commands begin with "#" symbol. 
eg-#include(includes contents of another file into the present file. commonly it have .h extention
indicating that they are header file) format- 1.( <> ) say to look in standard system directories,
                                              2.( "" ) say to look in current directory.
,#define-used to define preprocessor variable,constant&macro(macro is much like functions but faster).
It acts as if an editor did a global search-and-replace edit of the file.
 #define is also used in debugging (we can have print statements that we only want active when debugging).
we can protect them in a "ifdef" block  eg:- (#define DEBUG
                                              #ifdef DEBUG (print statements)
                                              #endif
                                              #undef DEBUG)
,#undef(undefines pre processed macro),#ifdef(if define),#ifndef(if not define)
,#if(checks if any compile time situatiion is true),#else,#elif(a kind of else if command of preprocessor),
#endif(will end preprocessor condition),#pragma(issue special commands to the compiler),#error(print error message).

some Pre defined MACROS in C:-
1. __DATE__ - "MMM DD YYYY"
2. __TIME__ - "HH:MM:SS"
3. __FILE__ - "the current file name as a string literal"
4. __LINE__ - "the current line number as a decimal constant"
5. __STDC__ - "defined as 1 if compiler compiles with ANSI standard "
*/
int main()
{
    int x;
    printf("what is the radius of circle?\n");
    scanf("%d",&x);
   printf("area of circle is %f\n",PI*area_of_circle(x));

   printf("todays date is %s\n",__DATE__);
   printf("time is %s\n",__TIME__);
   printf("file is %s\n",__FILE__);
   printf("line is %d\n",__LINE__);
   printf("our system follow ANSI standards %d\n",__STDC__);
    return 0;

}