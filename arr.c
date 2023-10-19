#include <stdio.h>

void main()
{
    int n = 8;
    int a[n];
    a[0] = 68;
    a[1] = 74;
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}