#include <stdio.h>
#define max(a, b) (a) > (b) ? (a) : (b)
#define min(a, b) (a) < (b) ? (a) : (b)

// int max(int a, int b)
// {
//     return (a > b) ? a : b;
// }
// int min(int a, int b)
// {
//     return (a < b) ? a : b;
// }
void main()
{
    int a, b, c, d, e;
    int MAX, MIN, MID;
    printf("Enter the values of five variables:\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    MAX = max(max(max(max(a, b), c), d), e);
    MIN = min(min(min(min(a, b), c), d), e);
    MID = (a + b + c + d + e) - (MIN + MAX);
    printf("%d is max\n%d is mid\n %d id min", MAX, MID, MIN);
}