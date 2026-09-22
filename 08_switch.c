#include <stdio.h>

int main(){


    // 1


    // int day;
    // printf("enter day num:");
    // scanf("%d", &day);

    // switch(day){
    //     case 1: printf("monday"); break;
    //     case 2: printf("tuesday"); break;
    //     case 3: printf("wednesday"); break;
    //     default: printf("holiday"); break;
    // }


    // switch can be used when you want the code to be
    //  fast and not elongated while matching the values


    // 2

    // char grade;
    // printf("enter grade: ");
    // scanf("%c", &grade);

    // switch(grade){
    //     case 'A':
    //     case 'a':
    //          printf("excellent");break;
    //     case 'B':
    //     case 'b':
    //          printf("good");break;
    //     case 'C':
    //     case 'c':
    //          printf("average");break;
    //     case 'D':
    //     case 'd':
    //          printf("poor");break;
    //     default: printf("invalid");break;
    // }           // since it is character, you keep abc in single quote



    // 3
    

    int x,y;
    char oper;

    printf("enter: ");
    scanf("%d %c %d", &x, &oper, &y);

    switch(oper){
        case '+': printf("%d", x+y); break;
        case '-': printf("%d", x-y); break;
        case '*': printf("%d", x*y); break;
        case '/': 
        if (y !=0)printf("%d", x/y);
        else printf("cant be divided by zero");
         break;
        case '%': printf("%d", x%y); break;
        default: printf("invalid");
    }




    return 0;
}