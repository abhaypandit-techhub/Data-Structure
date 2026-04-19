
// INSERTION AT MID

#include <stdio.h>
#include <stdlib.h>

// STRUCTURE

struct dlist
{
  int data;
  struct dlist *next;
  struct dlist *prev;
} *start = NULL;
typedef struct dlist node;

// CREATE

void create()
{
  node *temp, *temp1;
  int n;
  printf("Enter a Maximum number of node to be create : ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    temp = (node *)malloc(sizeof(node));
    temp->prev = NULL;
    temp->next = NULL;
    printf("Enter a data for new node[%d] : ", i);
    scanf("%d", &temp->data);
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

// INSERTION AT MID

void Insertion_At_Mid()
{
  int count = 0;
  node *temp, *temp1;
  temp = start;
  while (temp != NULL)
  {
    count = count + 1;
    temp = temp->next;
  }
  int mid = count / 2;
  temp = (node *)malloc(sizeof(node));
  printf("Enter data for mid node : ");
  scanf("%d", &temp->data);
  temp->next = NULL;
  temp1 = start;
  for (int i = 1; i < mid; i++)
  {
    temp1 = temp1->next;
  }
  temp->prev = temp1;
  temp->next = temp1->next;
  temp1->next->prev = temp;
  temp1->next = temp;
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

//MAIN FUNCTION

int main()
{
  create();
  Insertion_At_Mid();
  display();
}