#include "arrayFuncs.h"

int sumOfArray(int a[], int size) {
  // variable for counting
  int sum = 0;
  // array parser
  for(int i = 0; i < size; i++) {
    sum += a[i];
  }
  return sum;
}
