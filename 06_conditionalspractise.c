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


    // 1

    int a;
    printf("enter: ");
    scanf("%d", &a);

    if (a >= 35){
        printf("passed");
    }
    else{
        printf("failed");
    }


    // 2

    int x, y, z;
    printf("enter: ");
    scanf("%d %d %d",&x, &y, &z );



    if (x==y && y==z){
        printf("it is an equilateral triangle");
    }  // and condition so all have to be equal
    else if (x==y || y==z || z==x){
        printf("it is an isosceles triangle");
    }  // or condition so the third shoukd NOT be equal to the rest
    else{
        printf("it is an scalene triangle");
    }


    return 0;
}