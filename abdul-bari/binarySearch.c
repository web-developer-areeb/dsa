#include<stdio.h>

int searchNumber(int arr[], int numberToFind, int high) {
  int index = -1;
  int l=0, h;
  int mid;

  h = high -1;


  while(l <= h){
    mid = (l+h)/2;
    if(arr[mid] == numberToFind) {
      index = mid;
      break;
    } else if(arr[mid] < numberToFind) {
      l = mid+1;
    } else {
      h = mid-1;
    };
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

  foundNumberindex = searchNumber(arr, numberToFind, numberOfElements);
  if(foundNumberindex > -1) {
    printf("Number %d is found at index %d in array.\n", numberToFind, foundNumberindex+1);
  } else {
    printf("Number %d is not found in array.\n", numberToFind);
  }


  return 0;
}