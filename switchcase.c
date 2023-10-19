#include <stdio.h>

int main()
{

    int a = 97;
    switch (a)
    {
    case 2:
        printf("2");
        break;
    case 4:
        printf("4");
        break;
    case 6:
        printf("6");
        break;
    case 8:
        printf("8");
        break; // BREAK use panla na elame run agidum, fallback to all below cases
    case 'a':
        printf(a);
        break;

    default:
        printf("Lobe");
        break;
    }

    return 0;
}