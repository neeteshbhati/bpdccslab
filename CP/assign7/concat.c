#include<stdio.h>
#include<string.h>

void main()
{
 char f[25],m[25],l[25],c[75];
 printf("Enter First Name, Middle Name, and Last Name");
 scanf("%s%s%s",f,m,l);
 strcat(c,f);
 strcat(c,m);
 strcat(c,l);
 printf("Full name is %s",c);
}
