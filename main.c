// write a program to add ,product and substraction of  2 numbers//

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the first number : \n");

    scanf("%d", &a);

    printf("Enter The second number:\n");
    scanf("%d", &b);

    printf("The sum is %d\n", a + b);
    printf("The product is %d\n", a * b);
    printf("The substraction is %d\n", a - b);

    return 0;
}