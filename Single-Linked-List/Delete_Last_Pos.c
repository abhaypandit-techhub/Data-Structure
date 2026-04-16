
//LAST NODE DELETE

#include <stdio.h>
#include <stdlib.h>

struct sl
{
  int data;
  struct sl *next;
} *start = NULL;
typedef struct sl node;

void create()
{
  int n;
  printf("Enter maximum linked list to be create : ");
  scanf("%d", &n);
  node *temp, *temp1;
  for (int i = 1; i <= n; i++)
  {
    temp = (node *)malloc(sizeof(node));
    printf("Enter a node[%d] :", i);
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
}

// DISPLAY

void display()
{
  node *temp;
  temp = start;
  while (temp != NULL)
  {
    printf("%d\t", temp->data);
    temp = temp->next;
  }
}

// DELETE LAST NODE

void lastDelete()
{
  node *temp, *temp1;
  temp = start;
  if (temp == NULL)
  {
    printf("Empty linked list");
  }
  else if (temp->next == NULL)
  {
    start = NULL;
    printf("\nLast node delete successfully that is %d\n", temp->data);
    free(temp);
  }
  else
  {
    while ((temp->next->next) != NULL)
    {
      temp = temp->next;
    }
    temp1 = temp->next;
    temp->next = NULL;
    printf("\nLast node delete successfully that is %d\n", temp1->data);
    free(temp1);
  }
}

int main()
{
  create();
  display();
  lastDelete();
  display();
  return 0;
}