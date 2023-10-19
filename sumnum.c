#include <stdio.h>
void main(){

printf("Enter Num: ");
long int n;
scanf("%lu",&n);
long int sum = 0,count=0;
while(n>0)
{
    long int r = n%10;
    count++;
    sum+= r;
    n=n/10;
}
printf("Sum is %lu\n",sum);
printf("Count is %lu",count);




}