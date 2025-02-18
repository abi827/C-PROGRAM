#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter Dividend: ");
    scanf("%d",&a);
    printf("Enter Divisor: ");
    scanf("%d",&b);


    int quotient = a/b;


    int remainder = a%b;
    printf("Quotient is : %d\nRemainder is: %d",quotient,remainder);
    return 0;
}
