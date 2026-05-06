
// BINARY SEARCHING WITHOUT USING FUNCTION
// Array of element must be arrange in ascending order

#include <stdio.h>
int main()
{

  int mid, r = 0;
  int n;
  int target, found;

  //SIZE OF ARRAY

  printf("Enter array size : ");
  scanf("%d", &n);
  int l = n - 1;
  int arr[n];

  for (int i = 0; i < n; i++)
  {
    printf("Enter a arr[%d] : ", i);
    scanf("%d", &arr[i]);
  }

  // SEARCH TARGET ELEMENT

  printf("Enter a element want to search through a Binary : ");
  scanf("%d", &target);

  // ACTUAL LOGIC

  while (r <= l)
  {
    mid = (r + l) / 2;
    if (arr[mid] == target)
    {
      found = 1;
      break;
    }
    if (arr[mid] < target)
    {
      r = mid + 1;
    }
    if (arr[mid] > target)
    {
      l = mid - 1;
    }
  }

  // CHECK FOUND OR NOT
  
  if (found == 1)
  {
    printf("Element is found in array though a binary search at index %d", mid);
  }
  else
  {
    printf("Element is doesn't found in array though a binary search");
  }
  return 0;
}