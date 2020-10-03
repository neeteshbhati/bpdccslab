#include<stdio.h>

void main()
{
 int n;
 float sum=1,term=1;
 printf("Enter N");
 scanf("%d",&n);
 
 for(int i=0;i<n-1;++i)
 {
  if(n==1)
  break;
  term = term + 3;
  sum = sum + term;
 }





 
 printf("The sum is %f",sum);
}
