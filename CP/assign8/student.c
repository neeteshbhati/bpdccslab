#include<stdio.h>
#include<string.h>

struct student {

  char name[10];
  char id[15];
  float cgpa;
  char station[20];

};

void main () {

  struct student input[10];
  int c = 0, i = 0;
  char key[15];

  do {
  
    printf("1. Add Student  2. Search Student  3. Exit\n");
    printf("Enter your choice : ");
    scanf("%d",&c);
    
    if (c == 1) {
    
      printf("Enter Name : ");
      scanf("%s",input[i].name);
      printf("Enter ID : ");
      scanf("%s",input[i].id);
      printf("Enter CGPA : ");
      scanf("%f",&input[i].cgpa);
      printf("Enter Station : ");
      scanf("%s",input[i].station);

      i+=1;
         
    } else if (c==2) {
    
      printf("Enter ID to search : ");
      scanf("%s",key);
      
      for (int j = 0 ; j < i ; ++j) {
      
        if(strcmp(input[j].id,key) == 0) {
	
	  printf("Name : %s\n",input[j].name);
	  printf("ID : %s\n",input[j].id);
	  printf("CGPA : %f\n",input[j].cgpa);
	  printf("Station : %s\n",input[j].station);
	
	} else {
	
	  printf("Student not found");

	}

      }
    
    }

  } while (c!=3);
  
}
