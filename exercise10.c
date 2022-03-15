#include <stdio.h>
/* take 2 2-D matrices from user then return its multiplied matrices
*/
int main()
{
    int sum=0;
    int matrice1[2][2];
    int matrice2[2][2];
    int result[2][2];
    printf("Multiplication of 2-D matrices A and B\n");

        printf("give values of matrices A \n");
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                scanf("%d",&matrice1[i][j]);
            }
        }
        printf("give values of matrices B \n");
         for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                scanf("%d",&matrice2[i][j]);

            }
        }
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                for (int k = 0; k < 2; k++)
                {
                    sum += matrice1[i][k]*matrice2[k][j];
                }
                result[i][j] = sum;
                sum=0;
            }
            
        }
        
         // OR
        // result[0][0]=matrice1[0][0]*matrice2[0][0]+matrice1[0][1]*matrice2[1][0];
        // result[0][1]=matrice1[0][0]*matrice2[0][1]+matrice1[0][1]*matrice2[1][1];
        // result[1][0]=matrice1[1][0]*matrice2[0][0]+matrice1[1][1]*matrice2[1][0];
        // result[1][1]=matrice1[1][0]*matrice2[0][1]+matrice1[1][1]*matrice2[1][1];
        printf("multiplied matrice is\n");
        for (int m = 0; m < 2; m++)
        {
            for (int n = 0; n < 2; n++)
            {
                printf("%d\t",result[m][n]);
            }
            printf("\n");
        }
    
    return 0;
}