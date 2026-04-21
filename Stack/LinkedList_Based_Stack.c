#include<stdio.h>
#include<stdlib.h>

//STRUCTURE FOR STACK

struct stack {
  int data;
  struct stack*next;
}*top=NULL;
typedef struct stack node;

// Push OPERATION IN STACK

void push(){
  node*temp;
  temp=(node*)malloc(sizeof(node));
  temp->next=top;
  printf("Enter value for node : ");
  scanf("%d",&temp->data);
  top=temp;
}

//POP OPERATION IN  STACK

void pop(){
  node*temp;
  temp=top;
  if(temp==NULL){
    printf("\nStack is underflow!");
  }
  else{
    top=top->next;
    printf("\nPop items is %d",temp->data);
    free(temp);
    printf("\nPop is successfully");
  }
}

  // PEEK OPERATION STACK

  void peek(){
    node*temp;
    temp=top;
    if(temp==NULL){
      printf("\nStack is underflow!");
    }
    else{
      printf("\nPeek items is %d",temp->data);
    }
  }
//DISPLAY STACK

void display(){
  node*temp;
  temp=top;
  if(temp==NULL){
    printf("\nStack is underflow!");
  }
  else{
    while(temp!=NULL){
      printf("\n%d",temp->data);
      temp=temp->next;
    }
  }
}

//MAIN FUNCTION

int main()
{
  int n;
  while (1)
  {
    printf("\n1 for Push\n2 for Pop\n3 for Peek\n4 for Display\n5 for Exit\nEnter a choice : ");
    scanf("%d", &n);
    if (n == 1)
    {
      push();
    }
    else if (n == 2)
    {
      pop();
    }
    else if (n == 3)
    {
      peek();
    }
    else if (n == 4)
    {
      display();
    }
    else if (n == 5)
    {
      break;
    }
    else
    {
      printf("Wrong choice!");
    }
  }
  return 0;
}