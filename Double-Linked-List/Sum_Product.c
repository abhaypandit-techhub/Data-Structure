
//SUM AND PRODUCT DOUBLE LINKED LIST

#include<stdio.h>
#include<stdlib.h>

struct dlist{
  int data;
  struct dlist*next;
  struct dlist*prev;
}*start=NULL;
typedef struct dlist node;

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

//DISPLAY

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

//SUM OF ELEMENT OF DOUBLE LINKED LIST

void sum_Product(){
  int sum=0;
  int prod=1;
  node*temp;
  temp=start;
  while(temp!=NULL){
    sum=sum+temp->data;
    prod=prod*temp->data;
    temp=temp->next;
  }
  printf("\nSum of element of double linked list is %d",sum);
  printf("\nProduct of element of double linked list is %d",prod);
}
int main(){
    create();
    display();
    sum_Product();
  
  return 0;
}