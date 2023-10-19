#include <stdio.h>
// CODE C Master Class - Kiruthik Kumar

int main()
{
    int a = 10, b = 20;
    if (a > b)
        printf("Yes"); // ONLY USES THIS
    else
        printf("No");



        
    /* Curly braces are not important in c, IT ONLY TAKES ONE STATEMENT*/
    char x = (a < b) ? 'Y' : 'N'; // ternary method
    printf("%c", x);

    return 0;
}