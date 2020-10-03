#include<stdio.h>

void main()
{
 int marks[5];
 float total,average;
 
 printf("Enter 5 subject marks\n");
 for(int i=0;i<5;++i)
 scanf("%d",&marks[i]);
 
 total = marks[0]+marks[1]+marks[2]+marks[3]+marks[4];
 average = total / 5;

 if (average>80)
 printf("Distinction");
 else if (average>69 && average<79)
 printf("Class I");
 else if (average>59 && average<68)
 printf("Class II");
 else if (average>49 && average<58)
 printf("Class III");
 else if (average>38 && average<48)
 printf("Average");
 else printf("Fail");
}

