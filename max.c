#include <stdio.h>

void main()
{
    int a, b, c, max;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (a > b && a > c)
    {
        max = a;
    }
    else if (b > a && b > c)
    {
        max = b;
    }
    else
    {
        max = c;
    }
    printf("%d is the max num", max);
    return 0;
}