#include "arrayFuncs.h"

int sumOfArray(int a[], int size) {
  // Precondition: array of size 0 is inputted
  // Postcondition: sum of array numbers is outputted

  // variable for counting
  int sum = 0;
  // array parser
  for(int i = 0; i < size; i++) {
    sum += a[i];
  }
  return sum;
}
