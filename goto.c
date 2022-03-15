#include <stdio.h>
int main(int argc, char const *argv[])
{
    /*These are also called ‘Jump Statement’. which includes- break,continue,goto and return.
      Goto is used to transfer the control to a predefined label.
	  syntax:- goto identifier;   (identifier are given with colon : at the end.)
      goto statement is preferable when we need to break multiple loops using a single statement at the same time.
	  Return statement exists the function. return exists immediately from the current function to the
	  calling routine. syntax:- return (expression);     and return value type should match the data type
	  of function like if its int function(){ return 0;} then return value should be int.
    */
   int x; 
	for (int i = 0;i <5; i++)
	{ 
		printf("\nHey Guys\n\n"); 
		for (int j = 0;j < 3; j++) 
		{ 
			printf("Type any No. & To Exit : Press 1\n"); 
			scanf("%d", &x); 
			if (x == 1) 
			{
			 	goto end; // This goto will transfer the control to end: i.e. out of both loop 
			} 
		}	 
	} 
	end: 
	printf("\'For\' loops are skipped as you pressed 1"); 
    return 0;
}