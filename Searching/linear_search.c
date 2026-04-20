
// LINEAR SEARCHING PROGRAM WITHOUT USING FUNCTION

#include <stdio.h>
int main()
{
  int found;
  int element;
  int n;
  printf("Size of array: ");
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    printf("Array[%d] element : ", i);
    scanf("%d", &arr[i]);
  }
  printf("Enter a element want to be a search: ");
  scanf("%d", &element);
  int i=0;
 while(i<n)
  {
    if (arr[i] == element)
    {
      found = 1;
      break;
    }
    i++;
  }
  if (found == 1)
  {
    printf("Element is found in array at index %d",i);
  }
  else
  {
    printf("Element is not found in array");
  }
  return 0;
}