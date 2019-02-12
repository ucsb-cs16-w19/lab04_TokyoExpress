#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

#include "utility.h"

int sumOdds(int a[], int size) {
  // variable for adding
  int oddsum = 0;
  // array parser
  for(int i = 0; i < size; i++) {
    if(isOdd(a[i])) oddsum += a[i];
  }
  return oddsum;
}
