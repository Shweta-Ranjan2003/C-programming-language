#include <stdio.h>
/*
You manage a travel agency and you want your n drivers to input their following details:
1. Name
2. Driving License No
3. Route 
4. Kms
Your program should be able to take n as input(or you can take n=3 for simplicity) and your drivers will start inputting their details one by one.

Your program should print details of the drivers in a beautiful fashion.
User structures.
*/

struct driver{
    char name[35];
    int DLno;
    char route[50];
    float kms;
} n1,n2,n3;

int main()
{
    printf("enter your details as asked below\n");
    printf("enter details of first driver as asked below\n");
    printf("name\t");
    scanf("%s",&n1.name);

    printf("driving license no.\t");
    scanf("%d",&n1.DLno);

    printf("route\t");
    scanf("%s",&n1.route);

    printf("kms traveled\t");
    scanf("%f",&n1.kms);

    printf("enter details of second driver as asked below\n");
    printf("name\t");
    scanf("%s",&n2.name);

    printf("driving license no.\t");
    scanf("%d",&n2.DLno);

    printf("route\t");
    scanf("%s",&n2.route);

    printf("kms traveled\t");
    scanf("%f",&n2.kms);

    printf("enter details of third driver as asked below\n");
    printf("name\t");
    scanf("%s",&n3.name);

    printf("driving license no.\t");
    scanf("%d",&n3.DLno);

    printf("route\t");
    scanf("%s",&n3.route);

    printf("kms traveled\t");
    scanf("%f",&n3.kms);
    
    printf("first driver's name is %s\t driving licence no. is %d\t route is %s\t kms travelled is %f\n",n1.name,n1.DLno,n1.route,n1.kms);
    printf("second driver's name is %s\t driving licence no. is %d\t route is %s\t kms travelled is %f\n",n2.name,n2.DLno,n2.route,n2.kms);
    printf("third driver's name is %s\t driving licence no. is %d\t route is %s\t kms travelled is %f\n",n3.name,n3.DLno,n3.route,n3.kms);

}
