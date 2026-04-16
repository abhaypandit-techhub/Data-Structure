// INSERTION OF NODE AT ANY POSTION IN SINGLE LINKED LIST

#include <stdio.h>
#include <stdlib.h>

struct sl
{
  int data;
  struct sl *next;
} *head = NULL;
typedef struct sl node;

// CREATE SINGLE LINKED LIST

void create()
{
  int n;
  node *temp, *temp1;
  printf("Enter a maximum node to create :");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    temp = (node *)malloc(sizeof(node));
    printf("Enter a data for node[%d] : ", i);
    scanf("%d", &temp->data);
    temp->next = NULL;
    if (head == NULL)
    {
      head = temp;
    }
    else
    {
      temp1 = head;
      while ((temp1->next) != NULL)
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
  temp = head;
  while (temp != NULL)
  {
    printf("%d\t", temp->data);
    temp = temp->next;
  }
}

// INSERT NODE AT ANY POSITION

void Insert_at_AnyPos()
{
  int pos;
  node *temp, *temp1;
  int count = 0;
  temp = head;
  while (temp != NULL)
  {
    count = count + 1;
    temp = temp->next;
  }
  printf("\nTotal node : %d", count);

  printf("\nEnter Position Want to be Insert Node : ");
  scanf("%d", &pos);

  if (pos < 1 || pos > count + 1)
  {
    printf("Invalid Position");
  }
  else
  {
    temp = (node *)malloc(sizeof(node));
    printf("Enter Data For New Node: ");
    scanf("%d", &temp->data);
    if (pos == 1)
    {
      temp->next = head;
      head = temp;
    }
    else
    {
      temp1 = head;
      for (int i = 1; i < pos - 1; i++)
      {
        temp1 = temp1->next;
      }
      temp->next = temp1->next;
      temp1->next = temp;
    }
  }
}

// MAIN FUNCTION

int main()
{
  create();
  display();
  Insert_at_AnyPos();
  display();
  return 0;
}