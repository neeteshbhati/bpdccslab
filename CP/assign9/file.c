#include <stdio.h>

void main () {

  int n;
  FILE *fptr;
  
  printf("Enter Number : ");
  scanf("%d",&n);

  fptr = fopen("testfile.txt","w");
  fprintf(fptr,"%d",n);
  fclose(fptr);

  printf("Successfully written to file\n");

  fptr = fopen("testfile.txt","r");
  fscanf(fptr,"%d",&n);
  fclose(fptr);

  printf("The value from file is %d",n);

}

