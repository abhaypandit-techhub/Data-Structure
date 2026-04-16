
// INSERTION AT FIRST

#include <stdio.h>
#include <stdlib.h>

// STRUCTURE FOR SINGLE LIST

struct sl
{
  int data;
  struct sl *next;
} *head = NULL;
typedef struct sl node;

// INSERTION AT FIRST NODE

void Insertion_at_First(int value)
{
  node *temp;
  temp = (node *)malloc(sizeof(node));
  temp->data = value;
  temp->next = head;
  head = temp;
}

// DISPLAY INSERTION AT FIRST NODE

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

// MAIN FUNCTION

int main()
{
  Insertion_at_First(2);  // FIRST ELEMENT GOES AT FIRST
  Insertion_at_First(4);  // SECOND ELEMENT GOES TO AT FIRST
  Insertion_at_First(8);  // THIRD ELEMENT GOES TO AT FIRST
  Insertion_at_First(10); // FOURTH ELEMENT GOES AT FIRST
  display();
  return 0;
}