#include<stdio.h>

int searchNumber(int arr[], int numberToFind) {
  int index = -1;
  int l=0, h=10;
  int mid = (l+h)/2;


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
  int arr[10] = {2, 4, 5, 8, 12, 14, 15, 18, 19, 44};
  int numberToFind, index;

  printf("Please enter the number to find in array [2, 4, 5, 8, 12, 14, 15, 18, 19, 44].\n");
  scanf("%d", &numberToFind);

  index = searchNumber(arr, numberToFind);
  if(index > -1) {
    printf("Number %d is found at index %d in array.\n", numberToFind, index);
  } else {
    printf("Number %d is not found in array.\n", numberToFind);
  }


  return 0;
}