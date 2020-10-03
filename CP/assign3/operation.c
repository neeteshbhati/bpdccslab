#include<stdio.h>

void main()
{
 float a,b,c,result;
 printf("Enter a,b,c");
 scanf("%f%f%f",&a,&b,&c);
 result = ((a+b)/(c*a))/((a+c)/2);
 printf ("the result is %f",result);
}
