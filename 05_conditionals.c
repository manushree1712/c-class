#include <stdio.h>

int main(){

    int age;
    printf("enter age:");
    scanf("%d", &age);
    if (age>=18){
        printf("eligible");
    }
    else{
        ("not eligible");
    }

    return 0;
}