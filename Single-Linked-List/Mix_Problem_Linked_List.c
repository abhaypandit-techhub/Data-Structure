// CREATE SINGLE LINKED LIST
// INSERTION AT FIRST
// INSERTION AT LAST
// INSERTION AT MID
// INSERTION AT ANY POSITION
// COUNT NODE
// DELETE FIRST NODE
// DELETE LAST NODE
// DISPLAY

#include <stdio.h>
#include <stdlib.h>

// STRUCTURE CREATE

struct sl
{
  int data;
  struct sl *next;
} *start = NULL;
typedef struct sl node;

// CREATE A NODE

void create()
{
  node *temp, *temp1;
  temp = (node *)malloc(sizeof(node));
  printf("Enter a data for new node :");
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

// INSERTION AT FIRST NODE

void Insertion_at_First()
{
  node *temp;
  temp = (node *)malloc(sizeof(node));
  printf("Enter a for node data : ");
  scanf("%d", &temp->data);
  temp->next = start;
  start = temp;
  printf("Insertion at node at first successfully");
}

// INSERTION AT LAST

void Insertion_at_last()
{
  node *temp, *temp1;

  temp = (node *)malloc(sizeof(node));
  printf("Enter a data for last node: ");
  scanf("%d", &temp->data);
  temp->next = NULL;

  // Case 1: If list is empty
  if (start == NULL)
  {
    start = temp;
  }
  else
  {
    // Case 2: Traverse to last node
    temp1 = start;
    while (temp1->next != NULL)
    {
      temp1 = temp1->next;
    }
    temp1->next = temp;
  }

  printf("Node inserted at last successfully\n");
}

// ADDITION OF NODE AT MIDDLE

void Insertion_at_Mid(int count)
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

// INSERT NODE AT ANY POSITION

void Insert_at_AnyPos()
{
  int pos;
  node *temp, *temp1;
  int count = 0;
  temp = start;
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
      temp->next = start;
      start = temp;
    }
    else
    {
      temp1 = start;
      for (int i = 1; i < pos - 1; i++)
      {
        temp1 = temp1->next;
      }
      temp->next = temp1->next;
      temp1->next = temp;
    }
  }
}

// COUNT NODE

void count_node()
{
  node *temp;
  temp = start;
  int count = 0;
  while (temp != NULL)
  {
    count = count + 1;
    temp = temp->next;
  }
  printf("Total number of node is %d", count);
}

// DELETE NODE AT FIRST POSITION

void FirstDelete()
{
  node *temp;
  temp = start;
  if (temp == NULL)
  {
    printf("\nEmpty linked list");
  }
  else
  {
    start = temp->next;
    printf("\nFirst Node Delete Successfully That is %d\n", temp->data);
    free(temp); // Delete free node
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

// DISPLAY

void display()
{
  node *temp;
  temp = start;
  if (temp == NULL)
  {
    printf("Empty list");
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

int main()
{
  int n;
  while (1)
  {
    printf("\nPress 1 for create a node\nPress 2 for Insertion at first\nPress 3 for Insertion at last\nPress 4 for Insertion at Mid\nPress 5 for Insertion at any Position\nPress 6 for CountNode\nPress 7 for Delete first node\nPress 8 for Delete last node\nPress 9 for Display List\nPress 10 for Exist\nEnter a choice : ");
    scanf("%d", &n);
    if (n == 1)
    {
      create();
    }
    else if (n == 2)
    {
      Insertion_at_First();
    }
    else if (n == 3)
    {
      Insertion_at_last();
    }
    else if (n == 4)
    {
      Insertion_at_Mid();
    }
    else if (n == 5)
    {
      Insert_at_AnyPos();
    }
    else if (n == 6)
    {
      count_node();
    }
    else if (n == 7)
    {
      FirstDelete();
    }
    else if (n == 8)
    {
      lastDelete();
    }
    else if (n == 9)
    {
      display();
    }
    else if (n == 10)
    {
      break;
    }
    else
    {
      printf("Wrong Choice");
    }
  }
  return 0;
}
