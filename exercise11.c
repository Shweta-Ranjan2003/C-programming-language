#include <stdio.h>
#include <string.h>
//check wheather a no. is palindrome(if return backwards then also remains same) or not. 

int ispalindrome(char num[])
{
    int check=0;
    for (int i = 0; i < ((int)strlen(num)/2) ; i++)
    {
        if (num[i]==num[((int)strlen(num)-i)])
        {
            check++;
        }
        else 
        {
            check=0;
        }
        
    }
    // if (check>=((int)strlen(num)/2)-1)
    if (check>0)
    {
        return 1;
    }
    else
     return 0;
}
/*int isPalindrome(int num)
{
    int reversed = 0;
    int originalNumber = num;

    // Lets reverse the number
    while (num != 0)
    {
        reversed = reversed * 10 + num % 10;  //if num is 878 then in first iteration reverse will store 8 
                                             //then in second iteration 7 then 8. (878%10=8 , 87%10=7 , 8%10=8)
        num = num / 10; //(878/10=87 , 87/10=8 , 8/10=0)
    }

    printf("The reversed number is %d\n", reversed);

    if (originalNumber == reversed)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}
*/
int main()
{
    char number[20];
    printf("enter the no. you want to check if its palindrome or not\n");
    gets(number);
    if (ispalindrome(number))
    {
        printf("entered no. is a palindrome\n");
    }
    else
    {
         printf("entered no. is not a palindrome\n");
    }
    return 0;
}