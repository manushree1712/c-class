#include <stdio.h>

int main(){

    int a = 5;
    float b = 0;

    printf("%d \n", a/b);
    printf("%f \n", (float)a/b);
    printf("%f \n", 0.0/0.0);
    printf("%d \n", 7%-2);
    printf("%d \n", -7%2);

    return 0;
}