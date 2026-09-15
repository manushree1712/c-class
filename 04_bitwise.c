// 15/9/26

#include <stdio.h>

int main(){

    printf("%d \n", 12&24);  // and - does multiplication
    printf("%d \n", 12|24);  // or - does addition
    printf("%d \n", 12^24);  // xor - same gives 0; diff gives 1
    printf("%d \n", 12^12);
    printf("%d \n", 12^0);
    printf("%d \n", ~5);     // ~ not - inverts stuff
    printf("%u \n", (unsigned int)~5); 
    printf("%d \n", 12<<3);  // left shift - shifts the digit to the left 
        // does 12*2^3 - increases value
    printf("%d \n", 12>>2); // right shift - shifts the digit to the right
        // does smt - decraeses value

    return 0;
}