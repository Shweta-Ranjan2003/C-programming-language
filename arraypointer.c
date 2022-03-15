#include <stdio.h>
//An array's or string's name, then , is actually just a pointer to its first element.

int main()
{
    int arr[]={2,5,7};
    //int *p=arr; //arr first element point
    int *ptr=&arr[0];
    for (int i=0;i<3;i++)
    {
        printf("%d\n",*(ptr+i));
    }
    char str[]="hello";
    char *q=str; //str first element point
    printf("%s\n",q); //hello
    char *ptrq=&str[0];
    for (int j=0;j<6;j++)
    {
        printf("%c",*(ptrq+j)); //hello
    }
    char *s="HI!";
    printf("\n%s\n",s); //here its printing HI! instead of printing address of the s
    printf("%c\n",*s); //H
    return 0;
}