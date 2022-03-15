#include <stdio.h>
#include <string.h>
/* A string is a one-dimensional array of characters that is terminated by a null (‘\0’). because lets say if array is
storing 7 character but we have to store only 4 character then for ignoring garbage value we have to terminate
it with \0 (null). and if we have 7 string character to store in that array then we can't because, for storing string
we need atleast (character+1 )space in array so that we can terminate it with \0. 
 string is not a data type in c.

 syntax:- char string_name[] ="shweta"; (here compiler will automatically take \0 after string because we used "")
        char string_name[] = {'s','h','w','e','t','a','\0'}; (if we use '' then we have to add null at end)
*/

void printStr(char string[])
{
    int i=0;
    while(string[i]!='\0') //not equal to operator
    {
        printf("%c", string[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    // char str[] = {'s','h','w','e','t','a','\0'};
     char str1[6] = "shweta"; //no space for null char so it will give garbage value
     char str2[7] = "shweta"; 

    char str[35];
    gets(str); //gets will take input from user and will automatically save it as a null terminated string.
                //scanf() reads input until it encounters whitespace.

    printf("Using custom function printStr\n");
    printStr(str);
    printf("using puts: \n");
    puts(str); //only permits you to print a string and add new line in end
    printf("Using printf\n %s", str);
    printf("\ngiving no null termination space to string\n %s",str1);
    printf("\ngiving null termination space to string\n %s",str2);

    char arr1[20]="LPU college";
    char arr2[20];
    //arr2=arr1; //this operator cant be used for copying one string into another.
    strcpy(arr2,arr1);
    printf("\n%s\n",arr2);

    char arr3[]="computer science";    //this will work even if did not mentioned string length.
    printf("%s\n",arr3);
    return 0;
}
