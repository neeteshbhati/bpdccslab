#include<stdio.h>

void main()
{
 int temp[2][7];
 
 for(int i=0;i<2;++i)
 {
  for(int j=0;j<7;++j)
  {
   printf("Enter Day %d temperature for city %d \n",j+1,i+1);
   scanf("%d",&temp[i][j]);
  }
 }

 for(int i=0;i<2;++i)
 {
  for(int j=0;j<7;++j)
   printf("City %d, Day %d : %d \n",i+1,j+1,temp[i][j]);
 }
}
 


