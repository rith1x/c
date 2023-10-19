#include <stdio.h>

int min(int a, int b, int c, int d)
{
    int e = a < b ? a : b;
    int f = c < d ? c : d;
    int g = e < f ? e : f;
    return g;
}
int main()
{
    int n, answer;
    scanf("%d", &n);
    for (int i = 0; i < 2 * n - 1; i++, printf("\n"))
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            answer = min(i, j, (2 * n - 2) - i, (2 * n - 2) - j);
            printf("%d", answer);
        }
    }
}