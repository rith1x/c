// You are given a number A in Kilometers. Convert this into B: Meters and C: Centi-Metres.

// Input Description:
// A number "A" representing some distance in kilometer is provided to you as the input.

// Output Description:
// Convert and print this value in meters and centimeters.

// Sample Input :
// 2
// Sample Output :
// 2000
// 200000


#include <stdio.h>

int mt(int n){
    return n * 1000;
}
int cm (int n){
    return n * 100;
}


int main(void) {
    int a;
    scanf("%d",&a);
    int mts = mt(a);
    int cms = cm(mts);
    printf("%d\n%d",mts,cms);
    return 0;
}