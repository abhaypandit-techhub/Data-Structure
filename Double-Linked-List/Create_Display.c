#include <stdio.h>
#include <stdlib.h>

// STRUCTURE CREATE FOR DOUBLE LINKED LIST

struct dlist
{
  struct dlist *prev;
  int data;
  struct dlist *next;
} *start = NULL;
typedef struct dlist node;

// CREATE DOUBLE LINKED LIST

void create_DList()
{
  node *temp, *temp1;
  temp = (node *)malloc(sizeof(node));
  temp->prev = NULL;
  printf("Enter a data a new node : ");
  scanf("%d", &temp->data);
  temp->next = NULL;
  if (start == NULL)
  {
    start = temp;
  }
  else
  {
    temp1 = start;
    while (temp1->next != NULL)
    {
      temp1 = temp1->next;
    }
    temp1->next = temp;
    temp->prev = temp1;
  }
}

// DISPLAY DOUBLE LINKED LIST

void display()
{
  node *temp;
  temp = start;
  if(temp==NULL){
    printf("Empty Double Linked list : ");
  }
  else {
  while (temp != NULL)
  {
    printf("%d\t", temp->data);
    temp = temp->next;
  }
}
}

// MAIN FUNCTION

int main()
{
  int n;
  while (1)
  {
    printf("\n1 for Create\n2 for Display\n3 for Exit\nEnter a Choice : ");
    scanf("%d", &n);
    if (n == 1)
    {
      create_DList();
    }
    else if (n == 2)
    {
      display();
    }
    else if (n == 3)
    {
      break;
    }
    else
    {
      printf("Wrong Choice!");
    }
  }
  return 0;
}