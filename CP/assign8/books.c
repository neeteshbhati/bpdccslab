#include<stdio.h>
#include<string.h>

struct book {
  
  char name[10];
  int price;
  char author[10];
  int year;

};


void main () {
  
  struct book input[10];
  int n,i;
  char key[10];
  printf("How many books do you want to enter?");
  scanf("%d",&n);

  for (i=0 ; i<n ; ++i) {
  
    printf("Enter Book Name : ");
    scanf("%s",input[i].name);
    printf("Enter Book Price : ");
    scanf("%d",&input[0].price);
    printf("Enter Author Name : ");
    scanf("%s",input[i].author);
    printf("Enter publication year : ");
    scanf("%d",&input[i].year);
    
  }
  
  printf("Enter book name to search : ");
  scanf("%s",key);
  
  for (i=0 ; i<n ; ++i) {

    if (strcmp(key,input[i].name)==0) {
    
       printf("Book Name : %s\n",input[i].name);
       printf("Book Price : %d\n",input[i].price);
       printf("Book Author : %s\n",input[i].author);
       printf("Book Year : %d\n",input[i].year);
       
    } else {
    
      printf("Book not found");

    }

  }

}






