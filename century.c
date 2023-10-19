#include <stdio.h>
void main()
{
    int a;
    printf("Enter a Year: ");
    scanf("%d", &a);
    if (a % 100 == 0)
    {
        printf("\nA Century Year");
        if (a % 400 == 0)
        {
            printf(" and also an Leap Year");
        }
    }
    else
    {
        printf("\nNot a Century Year");
        if (a % 4 == 0)
        {
            printf(" but an leap year");
        }
        else
        {
            printf(" and leap year");
        }
    }
}