#include <stdio.h>

int main()
{
    printf("Enter the date DDMMYYYY: ");
    int d, m, y, sum;
    sum = 0;
    scanf("%d%d%d", &d, &m, &y);
    switch (m)
    {
    case 1:
        sum += 31;
    case 2:
        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
        {
            sum += 29;
        }
        else
        {
            sum += 28;
        }
    case 3:
        sum += 31;
    case 4:
        sum += 30;
    case 5:
        sum += 31;
    case 6:
        sum += 30;
    case 7:
        sum += 31;
    case 8:
        sum += 31;
    case 9:
        sum += 30;
    case 10:
        sum += 31;
    case 11:
        sum += 30;
    case 12:
        sum += 31;
    }
    sum -= d;
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
    {
        printf("\nDays passed this year: %d\n", 366 - sum);
        printf("Days Till Next Year: %d", sum);
    }
    else
    {
        printf("\nDays passed this year: %d\n", 365 - sum);
        printf("Days Till Next Year: %d", sum);
    }

    return 0;
}