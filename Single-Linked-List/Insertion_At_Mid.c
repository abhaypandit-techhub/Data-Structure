
//INSERTION AT MID

#include <stdio.h>
#include <stdlib.h>

// STRUCTURE

struct sl
{
  int data;
  struct sl *next;
} *start = NULL;
typedef struct sl node;

// CREATE NODE

void create()
{
  node *temp, *temp1;
  temp = (node *)malloc(sizeof(node));
  printf("Enter a data for node : ");
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
  }
}

// ADDITION OF NODE AT MIDDLE

void insertion_at_mid(int count)
{
  int mid = (count / 2) ;
  node *temp, *temp1;
  temp = (node *)malloc(sizeof(node));
  printf("Enter a node data : ");
  scanf("%d", &temp->data);
  temp->next = NULL;

    temp1 = start;
    for (int i = 1; i < mid ; i++)
    {
      temp1 = temp1->next;
    }
    temp->next = temp1->next;
    temp1->next = temp;
  }

// DISPLAY

void display()
{
  node *temp;
  temp = start;

  if (temp == NULL)
  {
    printf("Empty Single linked list");
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

// main function

int main()
{
  int count = 0;
  int n;

  while (1)
  {
    printf("\n1 for create node\n2 for Add node in middle\n3 for display\n4 for Exist\nEnter a choice : ");
    scanf("%d", &n);

    if (n == 1)
    {
      create();
      count = count + 1;
    }
    else if (n == 2)
    {
      insertion_at_mid(count);
      count++;
    }
    else if (n == 3)
    {
      display();
    }
    else if (n == 4)
    {
      break;
    }
    else
    {
      printf("\nWrong choice");
    }
  }
  return 0;
}