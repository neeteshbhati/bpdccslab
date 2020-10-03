#include<stdio.h>

void main()
{
 int array[50][50],m,n;
 printf("Enter Rows and Columns of array\n");
 scanf("%d%d",&m,&n);
 
 for(int i=0;i<m;++i)
 {
  for(int j=0;j<n;++j)
  {
   printf("Enter element %d%d : ",i+1,j+1);
   scanf("%d",&array[i][j]);
  }
 }

 printf("The transpose of array is\n");

 for(int i=0;i<m;++i)
 {
  for(int j=0;j<n;++j)
   printf("%d\t",array[j][i]);
  printf("\n");
 }
 
}
