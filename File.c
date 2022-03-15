#include <stdio.h>
/* Files makes it is easy for the programmer to access and store content without losing it on program termination.
 Volatile memory:-the data remains only while computer is on or there is power supply.
                it hold data for short term eg:- RAM.
 Non-Volatile memory:- the data is stored even after computer's power is off/power supply off .
                      it hold data for long term eg:- hard disk.

There are two types of files:-
1. Binary Files: Binary files stores data in 01 i.e., binary format.
They are not directly readable.
An application or software is required to read binary files.
An example is a .doc file.
2. Text Files: They store data in simple text format.
They are directly readable.
No software is required to access them.
An example is a .txt file.

when working with file we have to declare a pointer of type FILE (this helps us to work with the file).(FILE*ptr)

Operations on files:-
1. Creating a file
2. Opening a file:- Syntax- ptr= fopen("filename","mode")   (fopen() is the function)
3. Closing a file:- Closing open file using fclose() function is the most important step.
                    Syntax- fclose(fptr); fptr is the file pointer associated with file to be closed.
4. Reading a file:- we use a function fscanf(). This function is a file version of scanf().
                    The file has to be opened in r mode
Eg:- ptr = fopen(“D:\\file.txt”,”r”);
     char str[128] = "Welcome to coding world";
     fscanf(ptr, "%s", str); //other than the expected arguments of scanf function, fscanf expects a file pointer.
     printf("%s",str );
5. Writing to a file:- use the function fprintf(). The function is a file version of printf().
                       The file has to be opened in w mode, i.e. write mode.
eg:- char str[128] = "Empty";
ptr = fopen(“D:\\file.txt”,”w”);
fprintf(ptr, "%s", str); //fprintf expects a file pointer in addition to other arguments which printf expects.

 The following are some of the basic modes:

r: opens a file for reading.
w: opens a file for writing. It can also create a new file.(if it doesn't exists then a new file is created).
writing starts from the begining of the file.
a: opens a file for appending. (if it doesn't exists then a new file is created).
r+: opens a file for both reading and writing but cannot create a new file.
w+: opens a file for both reading and writing. it first truncates the file to zero length if it exists otherwise
creates a new file.
a+: opens a file in both reading and writing (if it doesn't exists then a new file is created).
reading is started from the beginning only but writing can only append to file.

*/
int main()
{
    FILE *ptr = NULL;
    char str[50];
    char string[64] = "This content was produced by me in file.c";

    // ****** Reading a file ******
     ptr = fopen("trial.txt", "r");
     fscanf(ptr, "%s", str);
     printf("The content of this file has %s\n",str );
     fclose(ptr);

    // ****** append a file ******
     ptr = fopen("trial.txt", "a");
     fprintf(ptr, "%s", string);
     fclose(ptr);


    /*some of the functions are :- 
    fputc-simplest function to write a character to a file is fputc.(put character to a file)
         syntax- int fputc('character',FILE pointer);  it returns the written character written on success and
                             returns EOF(end of file)(constant defined in stdio.h header file) if fails.
    fputs-used to write a null terminated character array(string) to a file in c.(put string to a file)
        syntax- int fputs(const char *s,FILE *fp ); or int fputs("string",FILE *fp);
    fgetc-simplest function to read character from a file is fgetc.
          syntax- int fgetc(FILE *fp); it returns the read character on success and returns EOF on failure.
    fgets-used to read a null terminated character array(string) to a file in c.(get string to a file)
         syntax- int fgets(const char*s,int n ,FILE*fp); (const char*s- storage array we want our string to store
                                                           int n is the no. of characters you want to read+1)
    */
   ptr = fopen("trial.txt","r");
   char c =fgetc(ptr);
   printf("the character i read was %c\n",c);
   c = fgetc(ptr);
   printf("the character i read was %c\n",c);
   fclose(ptr);

   ptr = fopen("trial.txt","r");
   char read[4];
   fgets(read ,10,ptr);
   printf("this string is %s\n",read);
   fclose(ptr);
    
    return 0;
}