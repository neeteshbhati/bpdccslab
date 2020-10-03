#include<stdio.h>

void main()
{
 int m,n;
 printf("Enter Rows and Columns\n");
 scanf("%d%d",&m,&n);
 int a1[50][50], a2[50][50], sum[50][50];
 
 for(int i=0;i<m;++i)
 {
  for(int j=0;j<n;++j)
  {
   printf("Enter element %d%d of array one\n",i+1,j+1); 
   scanf("%d",&a1[i][j]);
  }
 }

 for(int i=0;i<m;++i)
 {
  for(int j=0;j<n;++j)
  {
   printf("Enter element %d%d of array two\n",i+1,j+1);
   scanf("%d",&a2[i][j]);
  }
 }

 printf("The sum is\n");

 for(int i=0;i<m;++i)
 {
  for(int j=0;j<n;++j)
   printf("%d\t",a1[i][j]+a2[i][j]);
 
  printf("\n");
 }
}
   
