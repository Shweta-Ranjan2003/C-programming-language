#include <stdio.h>
#include <conio.h>  //for function like getch,getche and putch
/*Input output built-in functions in C falls into two categories, namely, formatted input
output (I/O) functions and unformatted input output (I/O) functions.
printf() and scanf() are examples for formatted input and output functions and
getch(), getche(), getchar(), gets(), puts(), putchar() etc. are examples of unformatted
input output functions.
*/
int main()
{
    int c= getchar(); //reads one character at a time.
    getchar(); 
    putchar(c); //prints one character on the screen.
    printf("\n");
    char s[10];
    gets(s); //accepts any string until enter key is pressed.
    puts(s); //prints the string or character array.
    int a=getch(); //takes alphanumeric character from standard input device(eg from keyboard )
    getchar(); 
    putch(a); //prints any alphanumeric character taken by standard input device.
    printf("\n");
    int b=getche(); //takes alphanumeric character from standard input device. and it does not waits for user to press enter key after typing character.
    putch(b);
    return 0;
}