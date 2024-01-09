#include <stdio.h>

float areaofTriangle(float b,float h){
    return 0.5 * b * h;
}


int main() {
   float b,h;
   printf("Enter the length of base: ");
   scanf("%f",&b);
   printf("Enter the length of height: ");
   scanf("%f",&h);
   
   
   printf("Area of given triangle is %f sq.cm",areaofTriangle(b,h));
}
