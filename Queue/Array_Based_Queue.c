// ARRAY BASED QUEUE

#include <stdio.h>
int a[10], front = -1, rear = -1;

// ENQUEUE OPERATION IN STACK

void enqueue()
{
  if (front == -1 && rear == -1)
  {
    front = 0;
    rear = 0;
    printf("Enter a items for queue: ");
    scanf("%d", &a[rear]);
    printf("\nEnqueue is successfully");
    return;
  }
  else if (rear == 9)
  {
    printf("\nQueue is overflow!");
    return;
  }
  else
  {
    rear++;
    printf("Enter a items for queue: ");
    scanf("%d", &a[rear]);
    printf("\nEnqueue is successfully");
  }
}

// DEQUEUE OPERATION IN QUEUE

void dequeue()
{
  if (front == -1 && rear == -1)
  {
    printf("\nQueue is underflow!");
    return;
  }
  else if (front > rear)
  {
    front = -1;
    rear = -1;
    printf("\nQueue is underflow!");
    return;
  }
  else
  {
    printf("\nDequeue items is %d", a[front]);
    front++;
  }
}

// PEEK OPERATION IN QUEUE

void peek()
{
  if (front == -1 && rear == -1)
  {
    printf("\nQueue is underflow!");
    return;
  }
  else
  {
    printf("\npeek items in queue is %d", a[front]);
  }
}

// DISPLAY QUEUE

void display()
{
  if (front == -1 && rear == -1)
  {
    printf("\nQueue is underflow!");
    return;
  }
  else
  {
    for (int i = front; i <= rear; i++)
    {
      printf("\n%d", a[i]);
    }
  }
  printf("\nDisplay queue is succcessfully");
}

// MAIN FUNCTION

int main()
{
  int n;
  while (1)
  {
    printf("\n1 for Enqueue\n2 for Dequeue\n3 for peek\n4 for Display\n5 for Exit\nEnter a choice : ");
    scanf("%d", &n);
    if (n == 1)
    {
      enqueue();
    }
    else if (n == 2)
    {
      dequeue();
    }
    else if (n == 3)
    {
      peek();
    }
    else if (n == 4)
    {
      display();
    }
    else if (n == 5)
    {
      break;
    }
    else
    {
      printf("Wrong choice!");
    }
  }
  return 0;
}