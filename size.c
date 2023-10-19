#include <stdio.h>
void main()
{
    int n;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("\n Enter element %d : ", (i + 1));
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    float x = sizeof(a);
    float m = sizeof(a[0]);
    printf("\nThe size of the array is %.0f ", x / m);
}