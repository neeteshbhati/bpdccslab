#include<stdio.h>
#include<math.h>

void main()
{
 float a,b;
 printf("Enter a and b");
 scanf("%f%f",&a,&b);
 printf("The result is %f",pow(a,b+1)+pow(a,b+2)+pow(a,b+3));
}
