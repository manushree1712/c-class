#include <stdio.h>

int main(){


    int a = 3, b = 5;
    if (a>5 && ++b==6) printf("yes\n");
    printf("%d\n", b);

    if (a>5 || ++b==6) printf("yes\n");
    printf("%d\n", b);


    int marks;
    scanf("%d", &marks);
    if (10<=marks && marks<=20) printf("hello");



    return 0;
}