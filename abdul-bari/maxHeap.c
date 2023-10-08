#include<stdio.h>

int main () {
  int arr1[100];
  int arr2[100];
  int i, j, temp, arraySize;

  printf("Please enter size of Array\n");
  scanf("%d", &arraySize);

  printf("Please enter array elements\n");

  for(i = 0; i < arraySize; i++) {
    scanf("%d", &arr1[i]);
  }

  for(i = 0; i < arraySize; i++) {
    arr2[i] = arr1[i];

    j = i;
    while (j>0)
    {
      if(arr2[j] > arr2[j/2]) {
        temp = arr2[j];
        arr2[j] = arr2[j/2];
        arr2[j/2] = temp;
      }
      j = j/2;
    }
  };

  printf("\nMax heap array\n");
  for(i=0; i < arraySize; i++) {
    printf("%d, ", arr2[i]);
  };

  printf("\n");


  return 0;
}