#include <stdio.h>
int main()
{
    /*An array is a collection of data items of the same data type(each element of array is of same size). 
    And it is also known as subscript variable.
    Data in an array is stored in contiguous memory locations in RAM.
    It can also store the collection of derived data types such as pointers, structures etc.
    The C Language places no limits on the number of dimensions in an array.
     i.e. we can create any no. of dimension array E.g. 1d(vector) 2d array(matrice)etc.
    Index No. – It is the special type of no. which allows us to access variables of Arrays.
    */
   //Syntax:- data_type name[size];
   // data_type name[]={x,y..}; (in this case size mentioning not required in 1d).
   // data_type name[rows][columns]={{x,y},{z,a}...};

	//One dimensional array
	int marks[5], sum=0;
	printf("Enter marks of 5 students : \n\n");
	for (int i=0;i<=4;i++)
	{
	printf("Marks of %d student : ", i+1);
	scanf("%d", &marks[i]);
	sum += marks[i];
	}

	int average = sum/5;
	printf("\nThe average marks of 5 students are %d\n", average);

    //two dimensional array
    int hostel[2][4];
    for (int i = 0; i <2 ; i++)
    {
        for (int j = 0; j <4; j++)
        {
          printf("enter no. of student staying in room of %dst row and %dcolumn\n", i+1,j+1);
          scanf("%d", &hostel[i][j]);
        }
    }
    printf("no. of student staying in hostel in matrice form:-\n");
	for (int i=0;i<2;i++)
	{
		for (int j=0;j<4;j++)
		{
			printf("%d\t", hostel[i][j]);
		}
		printf("\n");
	} 
    //or we can write this also
    /*printf("%d\t", hostel[0][0]);
    printf("%d\t", hostel[0][1]);
    printf("%d\t", hostel[0][2]);
    printf("%d\n", hostel[0][3]);
    printf("%d\t", hostel[1][0]);
    printf("%d\t", hostel[1][1]);
    printf("%d\t", hostel[1][2]);
    printf("%d\t", hostel[1][3]);
    */

    int a[2][3]={5,4,3,2,1}; //it means 5,4,3 is its first row element and 2,1,0 is second row elements.
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",a[i][j]);  //it will print 543210 because there is no value for a[1][2].
        }
        
    }
    /*printf("\n%d", a[0][0]);  //5
    printf("\n%d", a[0][1]);  //4
    printf("\n%d", a[0][2]);  //3
    printf("\n%d", a[0][3]);  //2 it wll consider next column element as its row member 
    printf("\n%d", a[0][4]);  //1 its considering a[1][1] as its a[0][4]th element
    printf("\n%d", a[0][5]);  //0 its considering a[1][2] as its a[0][5]th element
    printf("\n%d", a[0][6]);  //3  garbage value similar to garbage value of a[1][3]
    printf("\n%d", a[1][0]);  //2
    printf("\n%d", a[1][1]);  //1
    printf("\n%d", a[1][2]);  //0 - blank position filled with 0
    printf("\n%d", a[1][3]);  //3 garbage value   */

    int b[][3]={2,5,7,6,3,2}; //Here 3,3 element of each column means 2 row.
    printf("\n%d\n",b[0][2]);  //7
    printf("%d\n",b[1][0]);   //6

    int c[3][2]={{3,1},{6,5},{2}};
    printf("%d\n",c[1][1]*c[2][1]);  //0 because its a empty space at c[2][1] so it will initialize as 0
    printf("%d\n",c[1][1]*c[2][0]);  //10

    return 0;
}
