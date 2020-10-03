#include <stdio.h>
#include <stdlib.h>

void main () {
  
  int *ptr; 
  ptr = (int *)malloc(sizeof(int));
  char option;
  int n;
  *ptr = 0;

  printf("Enter first number");
  scanf("%d",&n);
  
  (*ptr)+=n;

  do {
    
    printf("Enter number");
    scanf("%d",&n);
    getchar();
    (*ptr)+=n;    
    
    printf("Do you want to enter more numbers?");
    scanf("%c",&option);

  } while ( option!='n' );

  printf("Total is : %d",*ptr);

}
