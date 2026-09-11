
// 9/9/26

#include <stdio.h>

 int main(){  /* boiiler plate */

     int x = 3,y = 6;
     scanf("%d %d", &x,&y);
     printf("%d %d", x, y );



  unsigned int x = 2147483647;
  x = x+1;
  printf("%d \n", x);
  printf("%u", x);

 


   float a;
   double b;
   scanf("%f, %lf", &a, &b);
   printf("%. 15f %. 15f", a, b);

   float x = 3.456f;
   printf("%f", x);



   // operators btw - 11/9/26

  int a,b;
   printf("enter two numbers");
   scanf("%d %d", &a, &b);
   printf("add: %d \n", a+b);
   printf("sub: %d \n", a-b);
   printf("mul: %d \n", a*b);
   printf("div: %d \n", a/b);
   // printf("rem: %d \n", a%b);
   printf("div: %.2f \n", (float)a/b);
   //printf("amodb=%d \n", a%b);
   


 unsigned int x = 2147483647;
    x=x+1;
    printf("%d/n",x);
    printf("%u",x);

    
    short a;
    long b;
     long long c;
    scanf("%hd %ld %lld",&a,&b,&c);
    printf("%hd %ld %lld",a,b,c);
 

   return 0;
}