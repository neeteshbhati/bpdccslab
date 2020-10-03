#include<stdio.h>
#include<stdlib.h>

void main()
{
 int m1[10],m2[10];

 printf("Enter Array 1 of 10 numbers");
 for(int i=0;i<10;++i)
 scanf("%d",&m1[i]);

 printf("Enter Array 2 of 10 numbers");
 for(int j=0;j<10;++j)
 scanf("%d",&m2[j]);

 for(int k=0;k<10;++k)
 {
  if(m1[k]==m2[k])
   continue;
  else
  {
   printf("Not Identical");
   exit(0);
  }
 }
 printf("Identical");
}
