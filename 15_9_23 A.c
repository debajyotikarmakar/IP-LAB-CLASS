#include <math.h>

int main()
{
    float a, b;
    printf("enter the 1st number\n");
    scanf("%f", &a);
    printf("Enter the 2nd number\n");
    scanf("%f", &b);
    int divd=a;
    int div=b;
    int q=divd/div;
    int r=divd%div;

    printf("Quotient is  : %d, Remainder is : %d\n",q,r);

    printf("Adiition of 2 numbers is %f\n", a + b);
    printf("substraction of 2 numbers  is %f\n",a-b);
    printf("multiplication of 2 numbers is %f\n",a*b);
    printf("divison of 2 numbers is %f\n",a/b);
    return 0;
}