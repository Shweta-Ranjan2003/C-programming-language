#include <stdio.h>
/* Exercise of Units and Conversions

kms to miles
inches to foot
cms to inches
pound to kgs
inches to meters

*/
int main()
{
    char input;
   float kmsToMiles = 0.621371;
   float inchesToFoot = 0.0833333;
   float cmsToInches = 0.393701;
   float poundToKgs = 0.453592;
   float inchesToMeters = 0.0254;
   float first;

   while (1)
   {
       printf("Enter the input character, q to quit\n       1. kms to miles\n       2. inches to foot\n       3. cms to inches\n       4. pound to kgs\n       5. inches to meters\n");

       scanf(" %c", &input);
       switch (input)
       {
       case 'q':
        printf("Quitting the program...");
        goto end;

        case '1':
        printf("Enter quantity in terms of first unit\n");
        scanf("%f", &first);
        printf("%f Kms is equal to %f Miles\n\n\n", first, first*kmsToMiles );
        break;

        case '2':
        printf("Enter quantity in terms of first unit\n");
        scanf("%f", &first);
        printf("%f Inches is equal to %f Foot\n", first, first*inchesToFoot);
        break;

        case '3':
        printf("Enter quantity in terms of first unit\n");
        scanf("%f", &first);
        printf("%f Cms is equal to %f Inches\n", first, first*cmsToInches);
        break;

        case '4':
        printf("Enter quantity in terms of first unit\n");
        scanf("%f", &first);
        printf("%f Pounds is equal to Kgs %f \n", first, first*poundToKgs);
        break;

        case '5':
        printf("Enter quantity in terms of first unit\n");
        scanf("%f", &first);
        printf("%f inches is equal to %f meters \n", first,first*inchesToMeters);
        break;

       default:
       printf("In default now\n");
           break;
       }
   }
   
   /*this is how i did it
   int a,b,c,d;
    printf("choose what you want to convert\n");
    printf("type 1 if you want to convert km into m\n");
    printf("type 2 if you want to convert inch into cm\n");
    printf("type 3 if you want to convert m into inch\n");
    scanf("%d",&a);
    if (a==1)
    {
        printf("enter the value of kms u want convert:\t");
        scanf("%d",&b);
        printf("%d km is equal to %d meters",b,b*1000);
    }
    else
    if (a==2)
    {
         printf("enter the value of inch u want convert:\t");
        scanf("%d",&c);
        printf("%d inch is equal to %4.2f foot",c, (float)c/12);
    }
    else
    if (a==3)
    {
         printf("enter the value of  meter u want convert:\t");
        scanf("%d",&d);
        printf("%d m is equal to %6.2f inch",d,d*39.37);
    }
    else{
        printf("sorry u haven't chose any of the options");
    }
    */
    end:
      return 0;
}
