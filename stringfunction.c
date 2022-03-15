#include <stdio.h>
#include <string.h>
#include <ctype.h>
/*
strcat() = used to concatenate or combine two given strings
strlen() = used to show length of string
strrev() = used to show reverse of string
strcpy() = used to copy one string into another
strcmp() = used to compare two given strings
strstr() = This function takes two strings s1 and s2 as an argument and finds the first occurrence
           of the sub-string s2 in the string s1. The process of matching does not include 
           the terminating null-characters(‘\0’), but function stops there.
*/

int main()
{
    char s1[] = "harry";
    char s2[] = "ravi";
    char s3[54];
    
     printf("The length of s1 is %d\n", strlen(s1));
     printf("The length of s2 is %d\n", strlen(s2));

    printf("The strcmp for s1, s2 returned %d\n ", strcmp(s1, s2));

    puts(strcat(s1, s2));

    strcpy(s3 ,strcat(s1, s2));
     puts(s3);

     printf("The reversed string s1 is: ");
     puts(strrev(s1));
     printf("The reversed string s2 is: ");
     puts(strrev(s2));
    
    char upper = 'H';
    printf("%c\n",tolower(upper)); //tolower is used for lower casing the character.
    int j = 0;
    char str[] = "GeEks@123\n";
    char ch;
 
    while (str[j]) {
        ch = str[j];
        putchar(toupper(ch)); //to upper only changes lower case letter to upper case it doesn't do anything to other characters.
        j++;
    }
    return 0;
}
