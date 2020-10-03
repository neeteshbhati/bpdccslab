#include<stdio.h>

void main()
{
 int array[2][2],key,i,j;

 printf("Enter elements of array\n");
 for(i=0;i<2;++i)
 {
  for(j=0;j<2;++j)
  {
   scanf("%d",&array[i][j]);
  }
 }
 
 printf("Enter search key\n");
 scanf("%d",&key);

 for(i=0;i<2;++i)
 {
  for(j=0;j<2;++j)
  {
   if(array[i][j]==key)
    break;
  }
 }
 
 printf("location is : %d%d",i,j+1);
}



