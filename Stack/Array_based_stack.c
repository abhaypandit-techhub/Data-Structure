// ARRAY BASED STACK

#include <stdio.h>
int a[10], top = -1;

// PUSH OPERATION IN STACK

void push()
{
  if (top == 9)
  {
    printf("Stack overflow!");
    return;
  }
  else
  {
    printf("Enter a push data: ");
    scanf("%d", &a[++top]);
    printf("\nPush is successsfully");
  }
}

// POP OPERATION IN STACK

void pop()
{
  if (top == -1)
  {
    printf("Stack is underflow!");
    return;
  }
  else
  {
    printf("\nPop items is %d", a[top]);
    top--;
    printf("\nPop is successfully");
  }
}

// PEEK OPERATION IN STACK

void peek()
{
  if (top == -1)
  {
    printf("Stack is underflow!");
    return;
  }
  else
  {
    printf("\nPeek element in stack is %d", a[top]);
  }
}

// DISPLAY

void display()
{
  if (top == -1)
  {
    printf("Stack is underflow!");
    return;
  }
  else
  {
    for (int i = top; i >= 0; i--)
    {
      printf("\n%d", a[i]);
    }
    printf("\nDisplay all element in stack successfully");
  }
}
// MAIN FUNCTION

int main()
{
  int n;
  while (1)
  {
    printf("\n1 for Push\n2 for Pop\n3 for Peek\n4 for Display\n5 for Exit\nEnter a choice : ");
    scanf("%d", &n);
    if (n == 1)
    {
      push();
    }
    else if (n == 2)
    {
      pop();
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