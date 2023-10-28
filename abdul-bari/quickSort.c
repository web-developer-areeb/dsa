#include <stdio.h>

int Partition(int arr[], int low, int high)
{
  int pivot = arr[low];
  int i = low, j = high, temp;

  while (i < j)
  {

    do
    {
      i++;
    } while (arr[i] <= pivot);
    do
    {
      j--;
    } while (arr[j] > pivot);
    if (i < j)
    {
      temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
  }
  temp = arr[low];
  arr[low] = arr[j];
  arr[j] = temp;

  return j;
}

void QuickSort(int arr[], int low, int high) {

  if(low < high) {
    int j = Partition(arr, low, high);
    QuickSort(arr, low, j);
    QuickSort(arr, j+1, high);
  }
}

int main()
{
  int sizeOfArr, arr[100], i; 
  int temp;

  printf("\nPlease enter size of arr\n");
  scanf("%d", &sizeOfArr);

  printf("\nPlease enter array elements\n");
  for(i = 0; i < sizeOfArr; i++) {
    scanf("%d", &arr[i]);
  };


  for(i = sizeOfArr - 1; i >= 0; i--) {
    if(arr[sizeOfArr - 1] < arr[i]) {
      temp = arr[sizeOfArr - 1];
      arr[sizeOfArr - 1] = arr[i];
      arr[i] = temp;
    }
  }

  QuickSort(arr, 0, sizeOfArr - 1);

  printf("\n");
  for(i = 0; i < sizeOfArr; i++) {
    printf("%d, ", arr[i]);
  }
  printf("\n");


  return 0;
}