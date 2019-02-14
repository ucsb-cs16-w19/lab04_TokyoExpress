// utility.cpp

bool isOdd(int x) {
  // Precondition: Integer is inputted
  // Postcondition: prints true if odd, false if even
  // simple mod function
  if(x % 2 == 1 || x % 2 == -1) return true;
  return false; 
}
bool isEven(int x) {
  // Precondition: Integer is inputted
  // Postcondition: prints true if even, false if odd

  // another simple mod function
  if(x % 2 == 0) return true;
  return false;  
}
bool isPrime(int x) {
  // Precondition: Integer is inputted
  // Postcondition: prints true if prime, false if not prime
  // negative check
  if(x < 0) return false;
  // fringe cases check
  if(x == 1 || x == 0) return false;
  // a mod check for every number between 2 and x
  for(int i = 2; i < x; i++) {
    if(x % i == 0) return false;
  }
  return true;
}
