// DELETE LAST NODE IN DOUBLE LINKED LIST

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

// DELETE LAST NODE

void DeleteLastNode(){
  node*temp,*temp1;
  temp=start;
  if(start==NULL){
    printf("Empty double linked list!");
  }
  else if(temp->next==NULL){
    start=NULL;
    printf("\nLast node is delete successfully that is %d",temp->data);
    free(temp);
  }
  else{
  while(temp->next->next!=NULL){
  temp=temp->next;
  }
  temp1=temp->next;
temp->next=NULL;
printf("Last node is delete successfully that is %d\n",temp1->data);
free(temp1);
  }
}

// DISPLAY DOUBLE LINKED LIST

void display()
{
  node *temp;
  temp = start;
  if (temp == NULL)
  {
    printf("\nDouble Linked list empty! ");
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
  DeleteLastNode();
  display();
}

