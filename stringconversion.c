#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*convert string of digits to integer and floating-point values and vice versa.
double atof (const char *nptr);   converts the string nptr(of floating-point) to double
int atoi (const char *nptr);   converts the string nptr(of int) to int
long atol (const char *nptr);   converts the string nptr(of long int) to long value
if int and long are both stored in 4 bytes, function atoi and atol work identically.
char* itoa (int value,char*str,int base);  converts the integer value to string.
*/
int main()
{
    char str1[]="200.00";
    double a=atof(str1);
    printf("%s\n",str1);
    printf("%lf\n",a);
    char str2[]="15000";
    int b=atoi(str2);
    printf("%d\n",b);
    long int c=atol(str2);
    printf("%ld\n",c);

    int p=500;
    char string[30];
    printf("%d\n",p);
    itoa(p,string,10);
    printf("%s\n",string);


    return 0;
}