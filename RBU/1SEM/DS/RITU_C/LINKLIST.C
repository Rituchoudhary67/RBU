#include<malloc.h>
#include<process.h>
#include<stdio.h>

struct node {
  int data;
  struct node *link;
}*start;

void addatbeg(int);
void display_list(void);

void main() {
  int n;
  char ch;
  start = NULL;

  while(1) {
    clrscr();
    printf("\n 0. Exit");
    printf("\n 1.Add node at begining");
    printf("\n 2.Display list");
    printf("\n Enter your choice :");
    fflush(stdin);
    ch = getchar();

    switch(ch) {
     case '0': exit(0);
     case 'B':
     case 'b':
     case '1': printf("\n Enter any number :");
	       scanf("%d",&n);
	       addatbeg(n);
	       printf("\n Node added");
	       break;
     case '2': printf("\n Linked List :\n");
	       display_list();
	       break;
     default : printf("\n Wrong Choice");
    }
    getch();
  }         //end of while
}          // end of main


//function adding item at beginning of list
void addatbeg(int num) {
   struct node *t;
   t = malloc(sizeof(struct node));
   t -> data = num;
   t -> link = start;
   start = t;
}


// display link list
void display_list() {
  struct node *ptr;
  ptr = start;
  while(ptr != NULL) {
   printf("%d ->", ptr->data);
   ptr = ptr -> link;
  }
  printf("NULL");
}