#include<stdio.h>

void main()
{
 int array[10],key;

 printf("Enter Array of 10 numbers");
 for(int i=0;i<10;++i)
 scanf("%d",&array[i]);

 printf("Enter Search Key");
 scanf("%d",&key);

 for(int i=0;i<10;++i)
 {
  if(array[i]==key)
  {
   printf("Location : %d",i+1);
   break;
  }
 }
}
  

  
