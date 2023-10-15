#include <stdio.h>

int main()
{
  int arr1[100];
  int arr2[100];
  int i, j, temp, arraySize, tempArraySize, temp2;

  printf("Please enter size of Array\n");
  scanf("%d", &arraySize);

  printf("Please enter array elements\n");

  for (i = 1; i <= arraySize; i++)
  {
    scanf("%d", &arr1[i]);
  }

  for (i = 1; i <= arraySize; i++)
  {
    arr2[i] = arr1[i];

    j = i;
    while (j > 1)
    {
      if (arr2[j] > arr2[j / 2])
      {
        temp = arr2[j];
        arr2[j] = arr2[j / 2];
        arr2[j / 2] = temp;
      }
      j = j / 2;
    }
  };

  printf("\nMax heap array\n");
  for (i = 1; i <= arraySize; i++)
  {
    printf("%d, ", arr2[i]);
  };

  printf("\n");

  tempArraySize = arraySize;
  for (i = 1; i <= tempArraySize; i++)
  {
    temp = arr2[1];
    arr2[1] = arr2[arraySize + 1 - i];
    arr2[arraySize + 1 - i] = temp;

    j = 1;

    while (j*2 + 1 <= tempArraySize - i)
    { 
      if(arr2[j*2] >= arr2[j*2 + 1]) {
       if(arr2[j] < arr2[j*2]) {
        temp2 = arr2[j];
        arr2[j] = arr2[j*2];
        arr2[j*2] = temp2;
        j = j * 2;
       } else {
        break;
       }
      } else {
       if(arr2[j] < arr2[j*2 + 1]) {
        temp2 = arr2[j];
        arr2[j] = arr2[j*2 + 1];
        arr2[j*2 + 1] = temp2;
        j = j*2 + 1;
       } else {
        break;
       }
      }
    }

  };

  printf("\nSorted Array is\n");

  for (i = 1; i <= arraySize; i++)
  {
    printf("%d, ", arr2[i]);
  };
  printf("\n");

  return 0;
}