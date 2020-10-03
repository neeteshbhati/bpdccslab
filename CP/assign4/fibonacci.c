#include<stdio.h>

void main()
{
 int i=0,n,term,tprev,tdprev;
 printf("Enter N");
 scanf("%d",&n);
 tprev = 1; tdprev = 0;
 
 if(n==1)
 printf("0");
 else if(n==2)
 printf("0 1");
 else
 printf("0 1 ");

 while(i<n-2)
 {
  term = tprev + tdprev;
  tdprev = tprev;
  tprev = term;
  printf("%d ",term);
  
  ++i;
 }
}

  
