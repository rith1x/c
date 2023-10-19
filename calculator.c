#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the two numbers: ");
    scanf("%d %d", &a, &b);
    char o;
    printf("\nEnter the Operator: ");
    scanf("%c %c", &o,&o);
switch (o)
    {
    case '+':
        printf("%d",a+b);
        break;
    case '-':
        printf("%d",a-b);
        break;
    case '*':
        printf("%d",a*b);
        break;
    case '/':
        printf("%d",a/b);
        break;
    case '%':
        printf("%d",a%b);
        break;
    default:
        printf("Invalid Operator!!");
        break;
    }
    return 0;
}