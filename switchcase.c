#include <stdio.h>
int main(int argc, char const *argv[])
{
    /*syntax:- switch(variable) [can only be int or char otherwise it will become invalid switch]
    {
    case 2: printf(); (case 2 means if variable value is 2 , then case 2 will be printed.)
    break; 
    case 3: printf(); (case label should always be constant,it should not be a variable or floating no.)
    break;
    default: printf(); 
    (if we dont write break then after checking values it will also print default statement.)
    */
   int cgp ;
   char grade;
   printf("enter your cgp here\n");
   scanf("%d", &cgp);
   getchar(); //it will consume the enter(u have pressed after writing your cgp) as a character. otherwise you will 
              //not get a option of writing grade in scanf of char.
   printf("you have entered your cgp %d\n", cgp);
   switch (cgp)
   {
   case 9:
       printf("you are doing great, keep it up\n");
       printf("enter your grade\n");
       scanf("%c", &grade);
       printf("you have entered your grade %c\n", grade);
       switch (grade)    //Nesting
       {
            case 'a' : printf("you are a genious"); //in case of char we have to write variable in single quote.
       break;
       case 'b' : printf("brilliant");
    break;
       case 'c' : printf("very good");
       break;
       default: printf("good");
       }
       break;
    
    case 8:
    printf("pay a little more attention");
    break;
    case 7:
    printf("study more");
    break;
    case 6:
    printf("not good at all please focus");
    break;
   
   default:
   printf("reappear in exam");
       
   }
    return 0;
}
