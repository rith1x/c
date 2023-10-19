#include <stdio.h>

void main()
{
    int a, b, c, max;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    max = a;
    int r = (max<b) ? (c<b) ? max = c :max = b: max=a;
    
    printf("%d is the max num", max);
    return 0;
}