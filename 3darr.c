#include <stdio.h>

int main()
{
    int x, y, z;
    printf("Enter the size of X: ");
    scanf("%d", &x);
    printf("Enter the size of Y: ");
    scanf("%d", &y);
    printf("Enter the size of Z: ");
    scanf("%d", &z);

    int arr[z][y][x];
    int i, j, k;
    for (i = 0; i < z; i++)
    {
        for (j = 0; j < y; j++)
        {
            for (k = 0; k < x; k++)
            {
                printf("[%d],[%d],[%d]: ", i, j, k);
                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    for (i = 0; i < z; i++)
    {
        for (j = 0; j < y; j++)
        {
            for (k = 0; k < x; k++)
            {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n\n");
    }
}