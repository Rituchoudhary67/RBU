#include<malloc.h>
#include<process.h>
#include<stdio.h>

struct node {
  int data;
  struct node *link;
}*start;

void addatbeg(int);
void display_list(void);
void sear_fun(int);
void append(int);

void main() {
  int n;
  int searNum;
  char ch;
  start = NULL;

  while(1) {
    clrscr();
    printf("\n 0. Exit");
    printf("\n 1. Add node at begining");
    printf("\n 2. Display list");
    printf("\n 3. Search node");
    printf("\n 4. Append node(i.e add at end)");
    printf("\n Enter your choice :");
    fflush(stdin);
    ch = getchar();

    switch(ch) {
     case '0': exit(0);
     case '1': printf("\n Enter any number :");
	       scanf("%d",&n);
	       addatbeg(n);
	       printf("\n Node added");
	       break;
     case '2': printf("\n Linked List :\n");
	       display_list();
	       break;
     case '3': printf("\n Enter number to be searched :");
	       scanf("%d",&searNum);
	       sear_fun(searNum);
	       break;
     case '4': printf("\n Enter number to be added at end :");
	       scanf("%d",&n);
	       append(n);
	       printf("Node added at end");
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

//searching function
void sear_fun(searNum) {
  struct node *ptr;
  ptr = start;
  while(ptr != NULL) {
    if(searNum == ptr->data) {
      printf("Number found in list");
      return;
    }
     ptr = ptr->link;
   }  //end of while
      printf("Number not found");
} // end of fun


//append function
void append(n) {
 struct node *temp, *r;
 if(start == NULL) {
  temp = malloc(sizeof( struct node));
  temp -> data = n;
  temp -> link = NULL;
  start = temp;
 } else {
   temp = start;
   // go to last node
   while(temp -> link != NULL)
   temp = temp -> link;

   //adding node at end
   r = malloc(sizeof(struct node));
   r -> data = n;
   r -> link = NULL;
   temp -> link = r;
 }
}