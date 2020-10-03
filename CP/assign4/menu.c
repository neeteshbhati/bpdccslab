#include<stdio.h>

void main()
{
 int c,input1,input2;
 printf("1. Individual ASCII Value\n2. Range of ASCII Values\n3. Al ASCII");
 scanf("%d",&c);
 switch(c)
 {
  case 1:
   printf("Enter value");
   scanf("%d",&input1);
   printf("ASCII value is %c",input1);
   break;
  case 2:
   printf("Enter 2 values in increasing order");
   scanf("%d%d",&input1,&input2);
   printf("ASCII values are: ");
   while(input1<=input2)
   {
    printf("%c",input1);
    ++input1;
   }
   break;
  case 3:
   printf("All ASCII values");
   int i=0;
   while(i<=255)
   {
    printf("%c",i);
    ++i;
   }
   break;
 }
} 
