#include <stdio.h>
int main()
{
    //Data types are classified :-
    //Basic data types :- integer,character,float. (float stores decimal value upto 6-7precision.)
    //derived data types :- pointer,array,structure,union.
    //enumeration data types :- enum.
    //void data type :- void.

    //1byte=8bits, data type takes different sizes in memory.
    //for eg:-char 1byte ,short int 2byte(16bits) ,int 4 byte(32bits), long long int 8 byte(64bits), float 4byte , double 8byte, long double 10byte.
    //by default they are signed variable(stores both+ -value),unsigned stores(+)value starting from 0

    //Format specifier
    // signed int - %d %i, long int- %ld, unsigned int - %u , char- %c, float -%f, string -%s
    //double- %lf, long double-%Lf ,pointer- %p, unsigned long int-%lu.

    printf("%lu", sizeof(int));
    printf("%i", sizeof(int));
    printf("%d", sizeof(double));
    printf("%u", sizeof(char));


    return 0;
}
