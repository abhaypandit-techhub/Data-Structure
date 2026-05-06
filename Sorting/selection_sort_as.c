
//SORTING OF ARRAY IN THE ASCENDING ORDER 

#include <stdio.h>
int main()
{
  int n;
  int swap;
  printf("Size of array : ");
  scanf("%d", &n);
  int arr[n];
  printf("Original Array : \n");

  for (int i = 0; i < n; i++)
  {
    printf("arr[%d] : ", i);
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 1+i ; j < n; j++)
    {
      if (arr[i] < arr[j]) //CHANGE INEQUALITY IT CONVERT DESCENDING ORDER OF SORTING
      {
        swap = arr[i];
        arr[i] = arr[j];
        arr[j] = swap;
      }
    }
  }
  printf("\nSorting array\n");

  for (int i = 0; i < n; i++)
  {
    printf("arr[%d] : %d\n", i, arr[i]);
  }
  return 0;
}