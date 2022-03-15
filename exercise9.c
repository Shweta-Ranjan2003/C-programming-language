#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*int generateRandomNumber(int n)
{
    srand(time(NULL)); //srand takes seed as an input and is defined inside stdlib.h
    return rand() % n;
}
//Create Rock, Paper & Scissors Game
// Player 1: rock
// Player 2 (computer): scissors -->player 1 gets 1 point

// rock vs scissors - rock wins
// paper vs scissors - scissors wins
// paper vs rock - paper wins
// Write a C program to allow user to play this game three times with computer. 
Log the scores of computer and the player. Display the name of the winner at the end
// Notes: %s have t,nameo display name of the player during the game. Take users name as an input from the user.
function srand() is used to initialize the random number generator by passing the argument seed. 
*/

int generateno1(int n)
{
    srand(time(NULL));
    return rand()%3; //it means it will select random value from 0,1,2
}
int main()
{
    int a , b , c;
    static int player=0;
    static int computer=0;
    printf("Lets play rock , paper scissors game\n");
    printf("how many letter are in your name \n");
    scanf("%d",&c);
    getchar();
    char name[c+1];
    printf("type your name below:-\n");
    gets(name);
    for (int i = 1; i < 4; i++)
    {
    
    printf("press 0 for rock and 1 for paper and 2 for scissor\n ");
    scanf("%d",&a);
    b = generateno1(a);
    if (b==0)
    {
        printf("computer selected rock\n");
        if (a==0)
        {
            printf("its a draw\n");
        }
        else if (a==1)
        {
            printf("%s win\n",name);
            player++;
        }
        else if (a==2)
        {
            printf("computer wins\n");
            computer++;
        }
    }
    else if (b==1)
    {
        printf("computer selected paper\n");
        if (a==0)
        {
            printf("computer wins\n");
            computer++;
        }
        else if (a==1)
        {
            printf("its a draw\n");
        }
        else if (a==2)
        {
            printf("%s win\n",name);
            player++;
        }
    }
    else if (b==2)
    {
        printf("computer selected scissor\n");
        if (a==0)
        {
            printf("%s win\n",name);
            player++;
        }
        else if (a==1)
        {
            printf("computer wins\n");
            computer++;
        }
        else if (a==2)
        {
            printf("its a draw\n");
        }
    }
    }
    printf("The score of computer is %d and %s's score is  %d\n",computer,name,player);
    if (computer>player)
    {
        printf("computer wins\n");
    }
    else if (player>computer)
    {
        printf("%s won\n",name);
    }
    else{printf("match draw\n");}
    return 0;
}