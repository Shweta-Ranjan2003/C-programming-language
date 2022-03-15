#include <stdio.h>
/*Command line arguments are used to supply parameters to the program when it is invoked. its mostly used when 
we have to control our program from console.These arguments are passed to the main() meathod.
for example:- git,FFmpeg etc is a command line utility written in c language.
Here in this file our utility is commandline.exe
To create a command-line utility, we must pass int argc and char const *argv[] to the program as arguments.

advantage-We can call command line program in any other language into a different language program quickly
 as each program has calling support in it for calling the command lines program.

argc- the total number of arguments passed to the utility. The first argument count is reserved for
the executable program's name, and the next ones are for the arguments passed to the program.
argc(argument count or count of argument)
argv-argv stores the pointer to the arguments passed to the program in an array of strings.
Note: argv does not store the actual argument, but the pointer to that argument.
argv(argument vector . vector means 1-D array)
*/
int main(int argc, char const *argv[])
{
    printf("the value of argc is %d\n",argc);
    for (int i = 0; i < argc; i++)
    {
        printf("this argument at index no. %d has a value of %s\n",i,argv[i]);
    }
    
    return 0;
}
// while running give your arguments with your utility that is ./commandline here.
