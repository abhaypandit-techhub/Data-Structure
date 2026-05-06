
// finding the minimum number of currency notes/coins using a greedy approach

#include <stdio.h>
int main()
{
  int a[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
  int n = 9;
  int count = 0;
  int amount;
  printf("Enter a amount: ");
  scanf("%d", &amount);
  int store = amount;
  for (int i = 0; i < n; i++)
  {
    if (amount >= a[i])
    {
      count = count + amount / a[i];
      amount = amount % a[i];
    }
  }
  printf("Minimum %d notes is required for amount %d", count, store);
  return 0;
}