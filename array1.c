#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the Value of index %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n\nGiven Array : [ ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("]");

    //FINDING LARGEST VALUE

    for (int i=0;)

    return 0;
}