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
  int arr[10];
  int numberToFind, foundNumberindex, i;

  printf("Please enter 10 numbers.\n");
  for(i=0; i<10; i++) {
    scanf("%d", &arr[i]);
  };
  printf("The number you have entered are...\n");
  for(i=0; i<10; i++) {
    printf("%d ,", arr[i]);
  };
  printf("\nPlease enter the number to be search ");
  scanf("%d", &numberToFind);

  foundNumberindex = searchNumber(arr, numberToFind);
  if(foundNumberindex > -1) {
    printf("Number %d is found at index %d in array.\n", numberToFind, foundNumberindex);
  } else {
    printf("Number %d is not found in array.\n", numberToFind);
  }


  return 0;
}