#include <stdio.h>

int main(){

    // implicit type conversion


        float x = 5;
        int y = 2;
        float z = (float)x/y; // putting this to ensure itll stay float instead of giving error
        printf("%.2f \n", z);


    // explicit type conversion

        int a = 5;
        int b = 3;
        float c = (float)a/b; //converts the answer into a totally new type
        printf("%.2f", c);


    // ---------------------------------------------------------------


        int age; char grade;
        printf("enter age and grade: ");
        scanf("%d", age);  // scan for int - age
        scanf("%c", grade);   // scan for char - grade

    
        
        char d;
        scanf("%c", &d);
        printf("leftover: %c", d);


          printf("age: %d, grade: %c", age, grade);

    return 0;
}