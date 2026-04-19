//DELETION OF FIRST NODE

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


// CREATE

void create()
{
  node *temp, *temp1;
  int n;
  printf("Enter a number node to create : ");
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

// DELETE FIRST NODE

void DeleteFirstNode(){
  node*temp;
  temp=start;
  if(start==NULL){
    printf("Empty double linked list!");
    return;
  }
  

  // ONE NODE CASE

  if(temp->next==NULL){
  start=NULL;
  printf("\nFirst node is delete successfully");
  free(temp);
  return;
}

 // MORE THAN TWO NODE

temp->next->prev=NULL;
start=temp->next;
  printf("First node is delete successfully that is %d\n",temp->data);
  free(temp);
}

// DISPLAY DOUBLE LINKED LIST

void display()
{
  node *temp;
  temp = start;
  if (temp == NULL)
  {
    printf("\nNow Double Linked list empty after deletion! ");
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

int main(){
  create();
  DeleteFirstNode();
  display();
}


