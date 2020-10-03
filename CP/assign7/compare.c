#include<stdio.h>

void compare( char x[], char y[]);

void main()
{
 char s1[25],s2[25];
 printf("Enter Two strings");
 scanf("%s%s",s1,s2);
 compare(s1,s2);
}

void compare( char x[], char y[])
{
 int flag = 1; 
 for(int i=0;x[i]||y[i];++i)
 {
  if(x[i]!=y[i])
    flag = 0;
 }
 
 if(flag==1)
  printf("Strings are same");
 else
  printf("Strings are different");

}
