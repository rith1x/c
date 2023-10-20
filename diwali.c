#include <stdio.h>
int main()
{
    int n;
    printf("Enter the N: ");
    scanf("%d", &n);
    int x = pow(2,n);
    printf("%d different patterns", x-1);
    return 0;

}
