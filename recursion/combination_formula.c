#include <stdio.h>

int factorial(int n){
  if(n < 0)
    return -1;

  else if(n == 0)
    return 1;

  return factorial(n - 1) * n;
}

// int nCr(int n, int r){ // Non-recursive nCr
//   int numer, denom;
//
//   numer = factorial(n);
//   denom = factorial(r) * factorial(n - r);
//
//   return numer/denom;
// }

int nCr(int n, int r){ // Recursive nCr (Using Pascal's Triangle)
  if(n == r || r == 0){
    return 1;
  }

  return nCr(n - 1, r - 1) + nCr(n - 1, r);
}

int main(int argc, char const *argv[]) {
  printf("%d\n", nCr(5, 2));
  return 0;
}
