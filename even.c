#include <stdio.h>
void main()
{
    int a;
    printf("Enter a Number: ");
    scanf("%d", &a);
    int b = (a % 2 == 0) ? printf("\nEven Number") : printf("\nOdd Number");
}