#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>
#include "utility.h"

int countEvens(int a[], int size) {
  // Precondition: array of integers greater than size 0 is inputted
  // Postcondition: number of even numbers is outputted
 
  // variable for counting
  int evens = 0;
  // array parser
  for(int i = 0; i < size; i++) {
    if(isEven(a[i])) evens++;
  }
  return evens;
}
