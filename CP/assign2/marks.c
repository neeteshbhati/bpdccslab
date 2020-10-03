#include<stdio.h>

void main()
{
 float m1,m2,m3,m4,m5,total,average;
 
 printf("Enter 5 subject marks");
 scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
 total = m1+m2+m3+m4+m5;
 average = total / 5;
 
 if(average>80)
   printf("Distinction");
 else if(average>69 && average<79)
   printf("Class I");
 else if(average>59 && average<68)
   printf("Class II");
 else if(average>49 && average<58)
   printf("Class III");
 else if (average>38 && average<48)
   printf("Average");
 else printf ("Fail");
}
