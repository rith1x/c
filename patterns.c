#include <stdio.h>

int main()
{
    int n;
    printf("size: ");
    scanf("%d", &n);

    printf("\nBasic Pattern:\n\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n\nRight Triangle Pattern:\n\n");

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n\n Decreasing triangle Pattern:\n\n");

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n\n Decreasing triangle Number Pattern:\n\n");

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row; col++)
        {
            printf("%d ", col);
        }
        printf("\n");
    }
}