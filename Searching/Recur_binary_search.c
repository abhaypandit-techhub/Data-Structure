//BILINEAR SEARCH USING RECURSION

#include <stdio.h>
int bilinear_search(int arr[], int r, int l, int target)
{
  int mid;
  if (r > l)
  {
    return 0;
  }
  mid = (r + l) / 2;
  if (arr[mid] == target)
  {
    return mid;
  }
  if (arr[mid] < target)
  {
    return bilinear_search(arr, mid + 1, l, target);
  }
  if (arr[mid] > target)
  {
    return bilinear_search(arr, r, mid - 1, target);
  }
}

int main()
{
  int n;
  int target;
  int found;

  printf("Enter array size : ");
  scanf("%d", &n);
  int arr[n];

  for (int i = 0; i < n; i++)
  {
    printf("Enter a arr[%d] : ", i);
    scanf("%d", &arr[i]);
  }

  printf("Enter a element want to be a search : ");
  scanf("%d", &target);

  found = bilinear_search(arr, 0, n - 1, target);

  if (found != 0)
  {
    printf("Element is found in array at index %d", found);
  }
  else
  {
    printf("Element is doesn't found in array");
  }
  return 0;
}