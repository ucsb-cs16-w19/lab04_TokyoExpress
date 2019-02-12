#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

#include "utility.h"

int countPrimes(int a[], int size) {
  // variable for counting
  int primes = 0;
  // array parser
  for(int i = 0; i < size; i++) {
    if(isPrime(a[i])) primes++;
  }
  return primes;
}

