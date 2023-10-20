#include <stdio.h>

int max(int a,int b){
    return (a > b)? a : b;
}
int min(int a,int b){
    return (a < b)? a : b;
}
void main(){
    int a, b, c, d, e;
    int MAX,MIN;
    printf("Enter the values of five variables: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    
    MAX = max(max(max(max(a,b),c),d),e);
    MIN = min(min(min(min(a,b),c),d),e);
    printf("%d is max & \n%d is min",MAX,MIN);
} 