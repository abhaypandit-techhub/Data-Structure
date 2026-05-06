#include <stdio.h>
#include <time.h>

int main()
{
  int num;
  int r, count = 0;
  int sum = 0;
  int rem;
  int mult;

  printf("Enter a number : ");
  scanf("%d", &num);
  
  r = num;
  while (r > 0)
  {
    r = r / 10;
    count += 1;
  }
  r = num;
  while (r > 0)
  {
    rem = r % 10;
    mult = 1;
    for (int i = 1; i <= count; i++)
    {
      mult = mult * rem;
    }
    sum = sum + mult;
    r = r / 10;
  }
  if (sum == num)
  {
    printf("number is Armstrong\n");
  }
  else
  {
    printf("Number is not Armstrong\n");
  }
  return 0;
}