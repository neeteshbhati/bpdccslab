#include <stdio.h>

void main()
{
 float a,b,t;
 char c;
 
 printf("Enter the first number");
 scanf("%f",&a);
 printf("Enter second number");
 scanf("%f",&b);
 printf("Enter operation : + - * /");
 getchar();
 scanf("%c",&c);


 switch (c)
 {
  case '+' : t=a+b;
             printf("The sum is %f",t); break;
  case '-' : t=a-b;
             printf("The difference is %f",t); break;
  case '*' : t=a*b;
             printf("The product is %f",t); break;
  case '/' : t=a/b;
             printf("The divison is  %f",t); break;
  default : printf("Incorrect choice");
 }
}
