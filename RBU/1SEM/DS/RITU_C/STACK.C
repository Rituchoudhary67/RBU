#include<stdio.h>
#define max 10

static int stack[max], top = -1;

void s_push(int num) {
  if(top == max -1) {
    printf("\n overflow");
  } else {
    top = top + 1;
    stack[top] = num;
    printf("\n Element added");
  }
}

void s_display(void) {
  int ptr;
  printf("\n top ->");
  if(top == -1) {
    printf("Null");
  } else {
    ptr = top;
    while(ptr != -1) {
     printf("\t%d | %d\n",ptr+1,stack[top]);
     ptr--;
    }
  }
}

int s_pop(void) {
  int num;
  if(top == -1) {
    printf("\n underflow");
    return 0;
  } else {
    num = stack[top];
    top = top -1;
    return num;
  }
}

void main() {
  int num ;
  char ch;
  while(1) {
   clrscr();
   printf("\n 0. Exit");
   printf("\n 1. Add element to stack PUSH");
   printf("\n 2. Remove element from stack POP");
   printf("\n 3. Display stack");
   printf("\n Enter your choice : ");
   fflush(stdin);
   ch = getchar();

   switch(ch) {
     case '0' : exit(0);
     case '1' : printf("\n Enter any number to add in stack : ");
		scanf("%d", &num);
		s_push(num);
		break;
     case '2' : printf("\n Enter any number : ");
		scanf("%d", &num);
		num = s_pop();
		if(num != 0)
		  printf("\n Poped element = %d",num) ;
		break;
     case '3' : printf("\ Display Stack");
		s_display();
		break;
     default :  printf("Invalid choice");
		break;
   }
   getch();
  }
}

