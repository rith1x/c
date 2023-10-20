#include <stdio.h>

int main()
{
    int n, c = 0;
    printf("Enter the size of the Rod: ");
    scanf("%d", &n);
    
    while (n != 0)
    {
        n = n / 2;
        c++;
    }
    printf("\n%d Cuts for %d inch rod\n", c - 1, n);
}