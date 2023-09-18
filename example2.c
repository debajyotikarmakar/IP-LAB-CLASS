#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the first number : \n");
    scanf("%d", &a);
    printf("Enter The second number:\n");
    scanf("%d", &b);
    printf("Enter The Third number:\n");
    scanf("%d", &c);

    printf("The sum is %d\n", a + b + c);
    printf("The product is %d\n", a * b * c);
    printf("The substraction is %d\n", a - b - c);

    return 0;
}