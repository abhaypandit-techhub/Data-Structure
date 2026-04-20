//LARGEST AND SMALLEST NUMBER PRSENT IN ARRAY
// TIME COMPLEXITY BIG 0(n)
// BETTER THAN M-1

#include <stdio.h>
int main()
{
  int n;
  printf("Size of array: ");
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    printf("arr[%d] : ", i);
    scanf("%d", &arr[i]);
  }
  int l = arr[0];
  int s = arr[0];

  for (int i = 1; i < n; i++)
  {
    if (l < arr[i])
    {
      l = arr[i];
    }
    if (s > arr[i])
    {
      s = arr[i];
    }
  }
  printf("Largest value is %d", l);
  printf("\nSmallest value is %d", s);
  return 0;
}