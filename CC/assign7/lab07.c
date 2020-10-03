// Neetesh Bhati (2017A7PS0060U)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct symbol_table {

    char var_name [30];
    int type;
    int isArray;

};

struct node {

    struct symbol_table var_list [20];
    struct node *prev;
    
};

struct node* head = NULL;

void create_new_table ();

void delete_table ();

void insert_to_table (char var[30], int type, int isArray);

int lookup_in_table (char var[30]);

int hash (char var[30]);

void main () {    

    int type;

    create_new_table();

    insert_to_table("var1",0,1);
    insert_to_table("var2",1,0);

    create_new_table();

    insert_to_table("var3",0,1);
    insert_to_table("var4",1,0);

    if ((type=lookup_in_table("var1")) != -1)
        printf("variable 1 is of type %d\n", type);
    else
        printf("var 1 not found\n");
    
    if ((type=lookup_in_table("var2")) != -1)
        printf("variable 2 is of type %d\n", type);
    else
        printf("var 2 not found\n");

    if ((type=lookup_in_table("var3")) != -1)
        printf("variable 3 is of type %d\n", type);
    else
        printf("var 3 not found\n");

    if ((type=lookup_in_table("var4")) != -1)
        printf("variable 4 is of type %d\n", type);
    else
        printf("var 4 not found\n");    

    delete_table();
    printf("table deleted \n");

    if ((type=lookup_in_table("var1")) != -1)
        printf("variable 1 is of type %d\n", type);
    else
        printf("var 1 not found\n");
    
    if ((type=lookup_in_table("var2")) != -1)
        printf("variable 2 is of type %d\n", type);
    else
        printf("var 2 not found\n");

    if ((type=lookup_in_table("var3")) != -1)
        printf("variable 3 is of type %d\n", type);
    else
        printf("var 3 not found\n");

    if ((type=lookup_in_table("var4")) != -1)
        printf("variable 4 is of type %d\n", type);
    else
        printf("var 4 not found\n");  
    
    delete_table();    

}

void create_new_table () {

    struct node* new_node = (struct node*) malloc(sizeof(struct node));

    if (head == NULL) {        
        new_node->prev = NULL;        
    }
    else {    
        new_node->prev = head;        
    }

    head = new_node;

    for (int i=0; i<20; i++) {
        head->var_list[i].type = -1;      
    }    

}

void delete_table () {

    if (head->prev == NULL) {
        free(head);
        head = NULL;
    }

    else {
        struct node* temp = head;    
        head = head->prev;    
        free(temp);
    }   

}

void insert_to_table (char var[30], int type, int isArray) {

    int index = hash(var);

    while (head->var_list[index].type != -1) {
        index = (index + 1) % 20;
    } 
    
    strcpy(head->var_list[index].var_name,var);
    head->var_list[index].type = type;
    head->var_list[index].isArray = isArray;

}

int lookup_in_table (char var[30]) {

    int index = hash(var);
    struct node* temp = head;    

    while (temp != NULL) {
        
        while (temp->var_list[index].type != -1) {

            if (strcmp(temp->var_list[index].var_name,var) == 0) {
                return temp->var_list[index].type;                
            }

            index = (index + 1) % 20;
        }

        temp = temp->prev;
    }

    return -1;
}

int hash (char var[30]) {
   
    long long int hash = 7;

    for (int i = 0; i < strlen(var); i++) {
        hash = hash*31 + (int) var[i];
    }

    hash = hash % 20; 
    return hash;

}