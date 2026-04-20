
#include <stdio.h>
int main()
{

  int n;
  printf("Size of array: ");
  scanf("%d", &n);
  int arr[n];
  int l, sl;

  for (int i = 0; i < n; i++)
  {
    printf("arr[%d] : ", i);
    scanf("%d", &arr[i]);
  }

  if (arr[0] > arr[1])
  {
    l = arr[0];
    sl = arr[1];
  }
  else
  {
    l = arr[1];
    sl = arr[0];
  }

  for (int i = 2; i < n; i++)
  {
    // SECOND LAEGEST

    if (arr[i] > l)
    {
      sl = l;
      l = arr[i];
    }
    else if (arr[i] > sl && arr[i] != l) // for tO ignore duplicate value second largest that's why we use arr[i!=l
    {
      sl = arr[i];
    }
  }

  printf("second largest=%d\n", sl);

  return 0;
}