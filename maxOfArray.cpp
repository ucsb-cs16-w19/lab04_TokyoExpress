#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

int maxOfArray(int a[], int size) {
 // Precondition: array of size 0 is inputted
 // Postcondition: max number in array is inputted
 if (size < 1) {
   std::cerr << "ERROR: maxOfArray called with size < 1" << std::endl;
   exit(1);
 }
 int result=a[0];
 for (int i=1; i<size; i++) {
   if (a[i] > result)
     result = a[i]; 
 }
 return result;

}
