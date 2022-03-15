#include <stdio.h>
#include <string.h>
/*Input:
<h1> This is the heading </h1>

Output:
This is the heading
*/
void parser(char* parsed)
{  int inside=0;  //Variable to track whether we are inside the tag  
   int index=0;
   for (int i = 0; i < strlen(parsed); i++)
   {
       if (parsed[i]== '<')
       {
           inside=1;
           continue;
       }
       else if (parsed[i]=='>')
       {
           inside=0;
           continue;
       }
       if (inside==0)
       {
           parsed[index]=parsed[i];
           index++;
       }   
   }
   parsed[index]='\0';
//removing trailing space from front
  while (parsed[0]==' ') //shift string to the left.
  {
      for (int i = 0; i < strlen(parsed); i++)
      {
          parsed[i]=parsed[i+1];
      }
      
  }
//removing trailing space from end
  while (parsed[strlen(parsed)-1]==' ')  //shift string to the right.
  {
      parsed[strlen(parsed)-1]='\0';
  }
  
}
  

int main()
{
    char parsed[]="<h1>       This is the heading   </h1>";
     parser(parsed);
     printf("~~~~%s~~~~\n",parsed);
    return 0;
}
















