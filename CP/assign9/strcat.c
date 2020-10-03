#include <stdio.h>
#include <string.h>

void main () {

  char s1[50], s2[25];
  int i,j,l;

  printf("Enter first string : ");
  scanf("%s",s1);
  printf("Enter second string : ");
  scanf("%s",s2);

  l = strlen(s1);

  s1[l] = ' ';

  for (i=l+1,j=0; i<=l+strlen(s2); ++i,++j) {
  
    s1[i] = s2[j];  
  
  }

  s1[i]='\0';

  puts(s1);

}
