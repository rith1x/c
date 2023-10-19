#include <stdio.h>
void main()
{
    int a;
    printf("Enter a Year: ");
    scanf("%d", &a);
    int b = (a % 4 == 0) ? printf("\nA Leap Year") : printf("\nNot a Leap Year");
}