#include<stdio.h>

void main()
{
 int a=10,b=20,temp;
 printf("a=%d and b=%d",a,b);
 temp=a;
 a=b;
 b=temp;
 printf("After swapping, a=%d and b=%d",a,b);
}
