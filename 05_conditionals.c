#include <stdio.h>

int main(){

    // int age;
    // printf("enter age:");
    // scanf("%d", &age);
    // if (age>=18){
    //     printf("eligible");
    // }                        /* can write else from this line */            
    // else{
    //     printf("not eligible");
    // }

    

    int marks;
    printf("enter marks:");
    scanf("%d", &marks);

    if (marks >= 90){
        printf("grade A");
    }
    else if (marks >= 81 && marks <= 90){
        printf("grade B");
    }
    else if (marks >= 71 && marks <= 80){
        printf("grade C");
    }
     else{
        printf("grade D");
    }
    

    return 0;
}