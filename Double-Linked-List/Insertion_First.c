// INSERTION AT FIRST DOUBLE LINKED LIST

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
  int num;
  node *temp, *temp1;
  printf("Enter a number node to be add :");
  scanf("%d", &num);
  for (int i = 1; i <= num; i++)
  {
    temp = (node *)malloc(sizeof(node));
    temp->prev = NULL;
    printf("node[%d] data : ", i);
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
}

// INSERT NODE AT FIRST

void InsertFirst()
{
  node *temp;
  temp = (node *)malloc(sizeof(node));
  printf("\nEnter a data for new node to be insert at first : ");
  scanf("%d", &temp->data);
  temp->prev = NULL;
  if (start != NULL)
  {
    start->prev = temp;
  }
  temp->next = start;
  start = temp;
  printf("\nNode is inserted at first successfully\n");
}

// DISPLAY DOUBLE LINKED LIST

void display()
{
  node *temp;
  temp = start;
  if (temp == NULL)
  {
    printf("Empty Double Linked list : ");
  }
  else
  {
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
  create_DList();
  display();
  InsertFirst();
  display();
  return 0;
}
