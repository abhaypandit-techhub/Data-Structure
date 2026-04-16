
// SINGLE LINKED CREATION
// INSERTION AT FIRST
// INSERTION AT LAST
// COUNT NODE

#include <stdio.h>
#include <stdlib.h>

// STRUCTURE CREATIONs

struct single_list
{
  int data;
  struct single_list *next; // (start/head) choose as you wish
};
struct single_list *start = NULL; // “start ek pointer variable hai jo linked list ke first node ka address store karega
typedef struct single_list node;  // NULL means no address

// NODE CREATEION FUNCTION

void list_creation()
{

  node *temp; // temp1 & temp is node name
  node *temp1;
  int data;
  temp = (node *)malloc(sizeof(node));
  temp->next = NULL;

  printf("Enter Data for new node : ");
  scanf("%d", &data);
  temp->data = data;

  if (start == NULL)
  {

    start = temp; // Assign temp address in start
  }

  else
  {

    temp1 = start; // Assign first address of start in first node

    while (temp1->next != NULL)
    {

      temp1 = temp1->next;
    }

    temp1->next = temp;
  }
}

// DISPLAY SINGLE LINKED LIST

void Display_list()
{
  node *temp;
  temp = start;
  if (temp == NULL)
  {
    printf("Empty linked list");
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

// MAIN FUNCTION

int main()
{
  int choice;

  while (1)
  {
    printf("\nPress '1' for Create single linked list\nPress '2' for Display single linked list\nPress '3' for Count\nPress '4' for Exist");
    printf("\nEnter a Choice : ");
    scanf("%d", &choice);

    if (choice == 1)
    {
      list_creation();
    }

    else if (choice == 2)
    {
      Display_list();
    }

    else if (choice == 3)
    {
      count_node();
    }
    else if (choice == 4)
    {
      break;
    }

    else
    {
      printf("Wrong choice");
    }
  }
  return 0;
}
