
//BUBBLE SORT IN INCREASING ORDER WITHOUT FUNCTION
// BIG 0(n^2)

#include <stdio.h>
int main()
{
  int n, swap;
  printf("Enter a size : ");
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    printf("arr[%d] :", i);
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])//If you change the sign of inequality bubble sort in desending order
      {
        swap = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = swap;
      }
    }
  }
  printf("\nBUBBLE SORT\n");
  for (int i = 0; i < n; i++)
  {
    printf("arr[%d] : %d\n", i, arr[i]);
  }
  return 0;
}