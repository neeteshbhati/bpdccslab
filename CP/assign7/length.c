#include<stdio.h>

void main()
{
 char string[25]; int i;
 printf("Enter string");
 scanf("%s",string);

 for(i =0;i<25;++i)
 {
  if(string[i]=='\0')
   break;
 }

 printf("Length of string is %d",i);
}
