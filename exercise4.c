#include <stdio.h>
/* Take input from the user and ask user to choose 0 for triangular star pattern and
 1 for reversed triangular star pattern
Then print the pattern accordingly
*
**
***
**** -> Triangular star pattern


*****
****
***
**
* -> Reversed triangular star pattern

*/
void printstar(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
           
        }
         printf("\n");
    }
    
}
void reversestar(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = rows; j>i ; j--)
        {
             printf("*");
        }
        printf("\n");
    }
    
}

int main()
{
    int a,rows;
    printf("press 0 if you want traingular star pattern and 1 if you want reverse triangular star pattern\n");
    scanf("%d",&a);
    if (a==0)
    {
    printf("how many rows you want ?\n");
    scanf("%d",&rows);
    printstar(rows); //call
    }
    else
    if (a==1)
    {
      printf("how many rows you want?\n");
      scanf("%d",&rows);
      reversestar(rows); //call
    }
    else
    {
        printf("you have not selected any of the options ");
    }
    
    return 0;
}


