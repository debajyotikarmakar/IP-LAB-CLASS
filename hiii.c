#include <stdio.h> 

int main(){
    printf("Enter the Dividend : \n");
    int divd;
    scanf("%d",&divd);

    printf("Enter Divisor : \n");
    int div;
    scanf("%d",&div);
    int q=divd/div;
    int r=divd%div;

    printf("Quotient is  : %d, Remainder is : %d",q,r);


    return 0;
}