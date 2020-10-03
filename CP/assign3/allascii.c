#include <stdio.h>

void main()
{
 int input;
 printf("Enter integer");
 scanf("%d",&input);
 printf("The ASCII value is %c",input);
 for(int i=0;i<=255;++i)
 printf("%c",i);
}
