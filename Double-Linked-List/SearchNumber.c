//SEARCH A ELEMENT IN A DOUBLE LINKED LIST

#include<stdio.h>
#include<stdlib.h>

// STRUCTURE CREATE

struct dlist{
  int data;
  struct dlist*next;
  struct dlist*prev;
}*start=NULL;
typedef struct dlist node;

// CREATE DOUBLE LINKED LIST

void create(){
  int n;
  node*temp,*temp1;
  printf("Enter a number of node to be create :");
  scanf("%d",&n);
  for (int i = 1; i <=n; i++)
  {
    temp=(node*)malloc(sizeof(node));
    temp->next=NULL;
    temp->prev=NULL;
    printf("Enter data for new node[%d] : ",i);
    scanf("%d",&temp->data);
    if(start==NULL){
      start=temp;
    }
    else{
      temp1=start;
      while(temp1->next!=NULL){
        temp1=temp1->next;
      }
      temp1->next=temp;
      temp->prev=temp1;
    }
  } 
}

// DISPLAY

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

//SEARCH NUMBER IN DOUBLE LINKED LIST

void searchNumber(){
  int num;
 int found=0; 
  node*temp;
  temp=start;
  printf("\nEnter a element want to be a search : ");
  scanf("%d",&num);
  while(temp!=NULL){
if(num==temp->data){
  found=1;
  break;
}
temp=temp->next;
}
if(found==1){
  printf("\nElement are found in double linked list");
}
else{
  printf("\nElement are not found in double linked list");
}
}

//MAIN FUNCTION

int main(){
    create();
    display();
    searchNumber();
  return 0;
}