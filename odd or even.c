// You are provided with a number check whether its odd or even. 

// Print "Odd" or "Even" for the corresponding cases.

// Note: In case of a decimal, Round off to nearest integer and then find the output. Incase the input is zero, print "Zero".

// Input Description:
// A number is provided as the input.

// Output Description:
// Find out whether the number is odd or even. Print "Odd" or "Even" for the corresponding cases. Note: In case of a decimal, Round off to nearest integer and then find the output. In case the input is zero, print "Zero".

// Sample Input :
// 2
// Sample Output :
// Even

#include <stdio.h>
int main(void) {

    int i;
    scanf("%d",&i);
    if ( i & 1 == 1){
        printf("Odd");
    } else {
        printf("Even");
    }
    
    return 0;
}