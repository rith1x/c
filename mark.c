#include <stdio.h>

int main() {

    int a,b,c,d;
    printf("Enter Mark of Subject 1: ");
    scanf("%d",&a);
    printf("Enter Mark of Subject 2: ");
    scanf("%d",&b);
    printf("Enter Mark of Subject 3: ");
    scanf("%d",&c);
    printf("Enter Mark of Subject 4: ");
    scanf("%d",&d);

    if (a>=40 && b>=40 && c>=40 && d>=40){
        printf("All Pass");
        int total = a+b+c+d;
        int avg = total/4;
        if (avg >= 90){
            printf(" and Grade O");
        } else if (avg >= 80 && avg < 90){
            printf(" and Grade A");
        } else if (avg >= 60 && avg < 80){
            printf(" and Grade B");
        } else if (avg >= 50 && avg < 70){
            printf(" and Grade C");
        } else {
            printf(" and Grade D");
        }

    } else {
        printf("Failed in Exam, Keep Trying!");
    }

    return 0;
}