
//DELETE NODE AT FIRST POSITION

#include <stdio.h>
#include <stdlib.h>

struct sl
{
  int data;
  struct sl *next;
} *head = NULL;
typedef struct sl node;

// CREATE LINKED LIST

void create()
{
  int n;
  node *temp, *temp1;
  printf("Enter a number of node to create :");
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

void display()
{
  node *temp;
  temp = head;
  if(temp==NULL){
    printf("\nNow single linked list is empty after deletion!");
  }
  else{
  while (temp != NULL)
  {
    printf("%d\t", temp->data);
    temp = temp->next;
  }
}
}

// DELETE NODE AT FIRST POSITION

void FirstDelete()
{
  node *temp;
  temp = head;
  head = temp->next;
  printf("\nFirst node delete that is %d\n", temp->data);
  free(temp); // Delete free node
}

// MAIN FUNCTION

int main()
{
  create();
  display();
  FirstDelete();
  display();
  return 0;
}