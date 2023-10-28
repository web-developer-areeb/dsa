#include <stdio.h>

void merge(int arr[], int l, int mid, int h)
{
  int i, j, k;
  int n1 = mid - l + 1;
  int n2 = h - mid;

  // create temp arrays 
  int Left[n1], Right[n2];

  // copy data to temp arrays
  for(i = 0; i < n1; i++) {
    Left[i] = arr[l+i];
  };

  for(j = 0; j < n2; j++) {
    Right[j] = arr[mid+1+j];
  };

  i = 0;
  j = 0;
  k = l;

  while (i < n1 && j < n2)
  {
    if (Left[i] <= Right[j])
    {
      arr[k] = Left[i];
      i = i + 1;
    }
    else
    {
      arr[k] = Right[j];
      j = j + 1;
    };
    k = k + 1;
  };


  // Copy the remaining elements of Left[],
  while (i < n1)
  {
    arr[k] = Left[i];
    k++;
    i++;
  };

  while (j < n2)
  {
    arr[k] = Right[j];
  };

};

void mergeSort (int unsortedArray[], int low, int high) {
  int mid;

  if(low < high) {
    mid = (low + high)/2;
    mergeSort(unsortedArray, low, mid);
    mergeSort(unsortedArray, mid+1, high);
    return merge(unsortedArray, low, mid, high);
  }
};

void printArray(int A[], int size) {
  int i;
  
  for(i = 0; i < size; i++) {
    printf("%d ", A[i]);
  }
  printf("\n");
}

int main()
{
  int arr[] = {5, 4, 3, 2};
  int arraySize = sizeof(arr)/sizeof(arr[0]);

  printf("Given Array is \n");
  printArray(arr, arraySize);

  mergeSort(arr, 0, arraySize - 1);

  printf("\nSorted array is \n");
  printArray(arr, arraySize);

  return 0;
};