#include <stdio.h>

int main()
{
    printf("BUBBLE SORT\nEnter the size of the array: ");
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of index %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nGiven Array:\n[ ");
    for (int j = 0; j < n; j++)
    {
        printf("%d ", arr[j]);
    }
    printf("]\nSORTING\n");
    for (int o = 0; o < n - 1; o++)
    {
        for (int m = 0; m < n - 1; m++)
        {
            if (arr[m] > arr[m + 1])
            {
                int temp = arr[m];
                arr[m] = arr[m + 1];
                arr[m + 1] = temp;
                for (int j = 0; j < n; j++)
                {
                    printf("%d ", arr[j]);
                }
                printf("\n");
            }

            
        }
    }

    scanf("%d", &n);
}