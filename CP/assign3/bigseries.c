#include<stdio.h>

void main()
{
 float sum=0; int n;
 printf("Enter N");
 scanf("%d",&n);

 for(int i=1;i<=n;++i)
 {
  if(i%2!=0)
  {
   printf("+1/%d ",i);
   sum+=(1/(float)i);
  }
  else
  {
   printf("-1/%d ",i);
   sum-=(1/(float)i);
  }
 }
 printf("Sum is %f",sum);
}
