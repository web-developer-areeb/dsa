#include<stdio.h>

int searchNumber(int arr[], int numberToFind, int low, int high) {
  int index = -1;
  int mid = (low + high)/2;

  if(low == high) {
    if(arr[low] == numberToFind) {
      return index = low;
    } else {
      return index = -1;
    }
  } else if(arr[mid] == numberToFind) {
    return index = mid;
  } else if(numberToFind <= arr[mid]) {
    searchNumber(arr, numberToFind, low, mid-1);
  } else {
    searchNumber(arr, numberToFind, mid+1, high);
  };

  return index;
}

int main() {
  int arr[100], numberOfElements;
  int numberToFind, foundNumberindex, i;

  printf("Please enter number of elements\n");
  scanf("%d", &numberOfElements);

  printf("Please enter %d numbers in ascending order.\n", numberOfElements);
  for(i = 0; i < numberOfElements; i++) {
    scanf("%d", &arr[i]);
  };
  printf("The number you have entered are...\n");
  for(i = 0; i < numberOfElements; i++) {
    printf("%d, ", arr[i]);
  };
  printf("\nPlease enter the number to be search ");
  scanf("%d", &numberToFind);

  foundNumberindex = searchNumber(arr, numberToFind, 0, numberOfElements-1);
  if(foundNumberindex > -1) {
    printf("Number %d is found at index %d in array.\n", numberToFind, foundNumberindex);
  } else {
    printf("Number %d is not found in array.\n", numberToFind);
  }


  return 0;
}