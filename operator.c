#include <stdio.h>
int main(int argc, char const *argv[])
{
    //operators are symbol used to perform operations.
    //types:- arithmetic, relational,unary,conditional,logical,bitwise,assignment.
    //arithmetic operators +-*/% (% shows remainder.)
    int a;
    a = 36;
    float b = 4.5;
    printf("a + b = %5.2f\n", a+b);
    //%5.2f means print answer in 5 character places with 2 decimal place accuracy.
    printf("a - b = %f\n", a-b);
    printf("a * b = %f\n", a*b);
    printf("a / b = %f\n", a/b);
   
    int x,z;
    x = 7;
    z=2;
    
    printf("x % z = %d\n", x % z);  //(% takes only integer operand)

    //relational operators compares two operands. < <= > >= == !=
    int m,n;
    m = 36;
    n = 36;
    printf("m < n = %d\n", m<n);
    printf("m <= n = %d\n",m<=n);
    printf("m > n = %d\n", m>n);
    printf("m >= n = %d\n",m>=n);
    printf("m == n = %d\n",m==n);
    printf("m != n = %d\n",m!=n);

    //logical operators checks logical relationship between two expression. And(both true),or(any one true),
    //not(reverses the state).
    int c,d;
    c=5;
    d=15;
    printf("c && d = %d\n",c<d&&d>c); //&& is called ampersands
    printf("c || d = %d\n",c!=d||c==d);
    printf("c ! d = %d\n",!(c==d));

    //unary operators +(show positive value) -(show negative value) ++(increment) --(decrement).
    printf("%d\n",+c);
    printf("%d\n",-d);
    //pre-in/de , substitution , evaluation , assignment , post-in/de.
    printf("y= %d\n",++c);
    printf("y= %d\n",--c);
    printf("y= %d\n",d--);
    printf("y= %d\n",d++);
    printf("y= %d\n",++d);

    //bitwise operators works on every bit of data. And(&),Or(|),Xor(^ where both are different then true).
    // '0' represents false value, while '1' represents true value.( Boolean data type )
    // a 0011
    // b 0101
    // & 0001
    // | 0111
    // ^ 0110
    //bitwise one's complement(~  -(n+1)),left shift(<<) , right shift(>>).

    int g,h;
    g=4;
    h=2;
    printf("%d\n",g<<h); //4=00000100 so left shift by 2 will make it 00010000 which is equal to 16.
    h=3;
    printf("%d\n",g>>h); //right shift by 3 will make it 00000000 which is equal to 0.

    //Assignment operators is used to assign result on right side to a variable on left side.
    //= += -= *= /= %= <<= >>= &= |= ^= (a+=b ; a=a+b).
    //a=b ,b=c it means value of b will be stored in a and value of c will be stored in b.
    h=2;
    printf("g= %d\n",g*=h);
    printf("g= %d\n",g&=h);
    printf("g= %d\n",g|=h);
    printf("g= %d\n",g^=h);

    //Conditional operators (syntax:- ?:) also called ternary operators , need 3 operands . [Condition?exp1:exp2]
    int age;
    printf("eligibility to vote. what is your age?\n");
    scanf("%d", &age);
    (age>=18)?printf("can cast vote"):printf("cannot cast vote");

    //special operators ,(comma) sizeof() , &(actual address of variable) , *(pointer)
    
    return 0;
}
