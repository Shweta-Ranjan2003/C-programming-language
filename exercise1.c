#include <stdio.h>
int main()
{
   int num;

    printf("enter the no. you want multiplication table of:\n");
    scanf("%d", &num);
    printf("%d * 1 = %d\n", num , num*1 );
    //,num ,num means in first %d num will be written and in second %d after comma num will be written.
    printf("%d * 2 = %d\n", num , num*2 );
    printf("%d * 3 = %d\n", num , num*3 );
    printf("%d * 4 = %d\n", num , num*4 );
    printf("%d * 5 = %d\n", num , num*5 );
    printf("%d * 6 = %d\n", num , num*6 );
    printf("%d * 7 = %d\n", num , num*7 );
    printf("%d * 8 = %d\n", num , num*8 );
    printf("%d * 9 = %d\n", num , num*9 );
    printf("%d * 10 = %d\n", num , num*10 );

    int numb;
    printf("enter no. you want table of: \n");
    scanf("%d", &numb);
    for (int i = 1; i < 11; i++)
    {
        printf("%d * %d = %d\n", numb , i , numb*i);
    }
    
    return 0;
}
