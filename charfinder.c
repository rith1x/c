#include <stdio.h>

int main()
{
    printf("Enter a Character: ");
    char x;
    scanf("%c", &x);
    switch (x)
    {
    case 'a' ... 'z':
        printf("Lowercase Letter");
        break;
    case 'A' ... 'Z':
        printf("Uppercase Letter");
        break;
    case '0' ... '9':
        printf("Integer");
        break;
    case 0 ... 9:
        printf("Integer");
        break;
    }
    return 0;
}
