#include <stdio.h>
int main(int argc, char const *argv[])
{
    //preprocessor generate expanded source code , removes our comments , expands macro and included files like header file.
    //preprocessed is saved as .i file.
    //compiler detects syntax error , preprossessed code is translated into assembly instructions.
    //compiled is saved as .s file. 
    //assembly translate assembly level instruction into machine/object code(basically 0 and 1).
    //assembly is saved as .o file.
    //linker combines object file with library routines and generate final exucatble file .exe exention file.
    return 0;
}
