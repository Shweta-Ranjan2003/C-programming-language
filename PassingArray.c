#include <stdio.h>
/* we can pass array in a function :-
  1. by declaring array as a parameter in the fuction.- inside function if you change value of array it gets reflected
  in main function .
  2. by declaring a pointer in the function to hold the base address of array.
  we know that in name of array its base address(address of first element )is stored.
  *arr will give value at arr(eg-1000) *(arr+1) will give value at arr(1004).
*/

int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, array[i]);
    }
     array[0] = 382; // Very important point that if you change any value here, it gets reflected in main()
    return 0;
}


void func2(int* ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, *(ptr + i) ); //or use ptr[i]
    }
    *(ptr + 2) = 6534;
}


void func3(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at %d, %d is %d\n", i, j, arr[i][j]);
        }
    }
}


int main()
{
     int arr1[] = {5,6,3,4};
     printf("The value at index 0 is %d\n", arr1[0]);
    func1(arr1);
     printf("The value at index 0 is %d\n", arr1[0]);
    func2(arr1);
     printf("The value at index 3 is %d\n", arr1[2]); //it will show 6534

    int arr[][2] = {{2, 13}, {9, 3}};
    func3(arr);
    return 0;
}