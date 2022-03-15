#include <stdio.h>
// take a vector array and using strrev function print it in reverse pattern

void arrayRev(int arr[])
{ 
    int extra;
   for (int i = 0; i < 7/2; i++)
   {
       extra=arr[i];
       arr[i]=arr[6-i];
       arr[6-i]=extra;
   }
}

void printarray(int ary[])
{
 for (int i = 0; i < 7; i++)
    {
        printf("%d\t",ary[i]);
    }
    printf("\n");
}
int main()
{
    int array[] = {5,3,6,9,7,1,8};
    printarray(array);
    printf("after reversing the array\n");
    arrayRev(array);
    printarray(array);
    
    return 0;
}