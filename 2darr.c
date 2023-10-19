#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter the Number of Columns: ");
    scanf("%d", &c);
    printf("Enter the Number of Rows: ");
    scanf("%d", &r);
    int arr[c][r];

    // Collecting Values

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("Enter the value of Column %d and Row %d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    // printing Even Num only

    printf("Even Numbers array: \n\n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            if (arr[i][j] % 2 == 0)
            {
                printf("%d ", arr[i][j]);
            }
            else
            {
                printf("-- ");
            }
        }
        printf("\n");
    }
    printf("\n\nOdd Number Array:\n\n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            if (arr[i][j] % 2 != 0)
            {
                printf("%d ", arr[i][j]);
            }
            else
            {
                printf("-- ");
            }
        }
        printf("\n");
    }

    printf("\n\nBorder only Array:\n\n");

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            if ((i == c - 1 || i == 0) || (j == r - 1 || j == 0))
            {
                printf("%d ", arr[i][j]);
            }
            else
            {
                printf("-- ");
            }
        }
        printf("\n");
    }
    printf("\n\n Inside only Array:\n\n");

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            if ((i == c - 1 || i == 0) || (j == r - 1 || j == 0))
            {
                printf("-- ");
            }
            else
            {
                printf("%d ", arr[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n\n Centric value Array:\n\n");
    if ((r > 2 && c > 2) || (r != c))
    {
        if ((r % 2 != 0 && c % 2 != 0))
        {

            for (int i = 0; i < c; i++)
            {
                for (int j = 0; j < r; j++)
                {
                    if (i == c / 2 && j == r / 2)
                    {
                        printf("%d ", arr[i][j]);
                    }
                    else
                    {
                        printf("-- ");
                    }
                }
                printf("\n");
            }
        }
        else
        {
        }
    }
    else
    {
        printf("Unsupported Matrix");
    }

    // FACTORIALS

    printf("\n\nFactorial Number Array:\n\n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            int f = arr[i][j];
            for (int k = arr[i][j] - 1; k > 0; k--)
            {
                f = f * k;
            }
            printf("%d ", f);
        }
        printf("\n");
    }
    // FACTORIALS

    printf("\n\n");
    int max = 0;
    int min = arr[0][0];
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
            else if (min > arr[i][j])
            {
                min = arr[i][j];
            }
            else
            {
                continue;
            }
        }
    }
    printf("The Biggest Number is %d", max);
    printf("The Smallest Number is %d", min);
}