#include <stdio.h>

void Test(n) {
  if(n > 0) {
    printf("%d \n", n);
    Test(n-1);
  }
}

int main () {
  Test(3);
};
