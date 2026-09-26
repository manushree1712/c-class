#include <stdio.h>

int main(){


    // int x, y, z;
    // printf("enter: ");
    // scanf("%d %d %d",&x, &y, &z );


    // if (x+y >= z && x+z>=y && y+z>=x){
        
    //     if (x==y && y==z){
    //     printf("it is an equilateral triangle");
    //     }  // and condition so all have to be equal

    //     else if (x==y || y==z || z==x){
    //     printf("it is an isosceles triangle");
    //     }  // or condition so the third shoukd NOT be equal to the rest

    //     else{
    //     printf("it is an scalene triangle");
    //     }
    // }
    // else{
    //     printf("not a triangle");
    // }



    int age, income, cs;

    printf("enter your age: ");
    scanf("%d", &age);

    if (age >= 21 && age <= 60){
        printf("enter your income: ");
        scanf("%d", &income);

        if (income >= 25000){
            printf("enter your credit score: ");
            scanf("%d", &cs);

            if (cs >= 700){
                printf("you are eligible");
            }
            else{
                printf("credit score is not eligible");
            }

        }
        else{
            printf("income not eligible");
        }

    }
    else{
        printf("age not eligible");
    }

    return 0;
}