
//COUNT TOTAL NUMBER OF NODE IN DOUBLE LINKED LIST

#include <stdio.h>
#include <stdlib.h>

// STRUCTURE

struct dlist{
  int data;
  struct dlist*next;
  struct dlist*prev;
}*start=NULL;
typedef struct dlist node;

// CREATE

void create(){
node*temp,*temp1;
int n;
printf("Enter a Maximum number of node to be create : ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
  temp=(node*)malloc(sizeof(node));
  temp->prev=NULL;
  temp->next=NULL;
  printf("Enter a data for new node[%d] : ",i);
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

// COUNT NODE

void CountNode(){
  node*temp;
  temp=start;
  int count=0;
while(temp!=NULL){
 count=count+1;
 temp=temp->next;
}
 printf("\nTotal number of node is %d",count);
}

//MAIN FUNCTION

int main(){
  create();
  CountNode();
  return 0;
}