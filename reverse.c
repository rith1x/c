#include <stdio.h>
void main()
{
    printf("Enter a Number: ");
    int n;
    scanf("%d", &n);
    int rev = 0;
    int rem = n;
    while (n > 0)
    {
        int r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    printf("Reversed Number: %d", rev);
    if (rem == rev)
    {
        printf("\nThe Given Number is a palindrome");
    }
    else
    {
        printf("Not a Palindrome");
    }
}