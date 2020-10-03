#include<stdio.h>

void main()
{
 int i=0,n,sum=1,term=1;
 
 printf("Enter N");
 scanf("%d",&n);
 
 if(n==1)
 {
  printf("Series : 1\n");
  printf("Sum : 1");
 }
 else
 {
  printf("Series : 1 ");
 }
 while(i<n-1)
 {
  term+=3;
  sum+=term;
  printf("%d ",term);
  
  ++i;
 }
 printf("Sum: %d",sum);
}
