#include <stdio.h>

int main(){


    // int num;
    // printf("enter:");
    // scanf("%d", &num);

    // if (num%11 == 0 || num%11 == 1){
    //     printf("specialll");
    // }
    // else{
    //     printf("not special");
    // }




    int mul;
    printf("enters:");
    scanf("%d", &mul);

    // if (mul%3==0 ^ mul%5==0){
    //     printf("true");
    // }
    // else{
    //     printf("false");
    // }

    if(mul%3==0 && mul%5==0){
        printf("false");
    }
    else if (mul%3==0 || mul%5){
        printf("true");
    }



    return 0;
}