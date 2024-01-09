#include <stdio.h>
float areaOfCircle(float rad){
    return 3.1415 * rad * rad;
}
int main() {
   float rad;
   printf("Enter the size of radius in cm: ");
   scanf("%f",&rad);
   float area = areaOfCircle(rad);
   printf("%.2f sq.cm",area);
}
