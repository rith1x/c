#include <stdio.h>
int main() {
    int t1=0,t2=1,n,temp;
    // int nxt = t1+t2;
    scanf("%d",&n);
    for (int i=3;i<=n;i++){
        temp=t1+t2;
        printf("%d ",temp);
        t1=t2;
        t2=temp;
    }
}