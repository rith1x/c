#include <stdio.h>
                                                    int main(){int n,i;int count=0;printf("Enter a num: ");scanf("%d",&n);for(i=2;i<n;i++){if(n%i==0){count++;}}if(count!=0){printf("Not a Prime");}else{printf("Prime");}return 0;}