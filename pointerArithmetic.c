#include <stdio.h>
/* there are 4 arithmetic that can be used in pointer (++ -- + -) ++ -- works normally but,
in pointer if we do +1 or -1 then we will get value increased/decreased by 4 in Ram because it will add/sub 1 sizeof(int) 
which is 4byte in my architecture , in char we will get correct value because char size is 1byte. 
if we print *(array+1) then compiler will automatically understand that it has to move memory location to 4 byte and print value of array[1].    
  arr[i] == *(arr+i) , it will give same value
&arr[1] == arr+1 , it will give same address
 because 1st array value will occupy 4 byte so in pointer for doing arr[1] from arr[0]
we will have to add +1 so that we add 4 byte and move to 2nd array's address.
if arr is a pointer to arr[0] then arr+1 is a pointer to arr[1].
*/
int main()
{
   int a=45;
   int* ptra = &a;
   char b='5';
   char* ptrb = &b;
      printf("the value of ptra is %d\n",ptra);
      printf("the value of ptra after arithmetic operation is %d\n",ptra+1);
       printf("the value of ptra is %d\n",ptrb);
      printf("the value of ptra after arithmetic operation is %d\n",ptrb+1);
      printf("\n\n");

      int arr[] = {2,4,7,9,10,15};
      printf("the value of position 3 of the array is %d\n",arr[2]);
      printf("the address of first element of the array is %d\n", &arr[0]); 
      printf("the address of first element of the array is %d\n", arr); // &arr[0]==arr they will give same address.
      printf("the address of second element of the array is %d\n", &arr[1]); 
      printf("the address of second element of the array is %d\n", arr+1);//&arr[i]==arr+1 they will give same address.
      printf("\n\n");
      // arr-- or arr++; this line will throw an error because arr is a constant.

      printf("the value at address of first element of the array is %d\n", *(&arr[0])); //* is dereferencing operator
      printf("the value at address of first element of the array is %d\n", arr[0]); 
      printf("the value at address of first element of the array is %d\n", *(arr)); 
      // *(&arr[0])==*(arr)==arr[0] they will give same value.
      printf("the value at address of second element of the array is %d\n",*(&arr[1])); 
      printf("the value at address of second element of the array is %d\n",arr[1]); 
      printf("the value at address of second element of the array is %d\n",*(arr+1)); 
      // *(&arr[1])==*(arr+1)==arr[1] they will give same value.

      int*ptr ,num=15;
      ptr =&num;
      *ptr+=1;
      printf("%d,%d\n",*ptr,num); //16,16 because ptr changed its original value from its base address.
      int e=5;
    int *ptre=&e;
    printf("%d\n",ptre); //adress of e
    *ptre=10;
    printf("%d\n",e); //10
    return 0;
}
