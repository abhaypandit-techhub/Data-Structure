
// BUBBLE SORT USING FUNCTION

#include <stdio.h>
void bubble_sort(int n, int arr[n])
{
  int swap;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = swap;
      }
    }
  }
}
int main()
{
  int n;
  printf("Enter a size : ");
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    printf("arr[%d] :", i);
    scanf("%d", &arr[i]);
  }
  bubble_sort(n, arr);
  printf("\nBUBBLE SORT\n");
  for (int i = 0; i < n; i++)
  {
    printf("arr[%d] : %d\n", i, arr[i]);
  }
  return 0;
}