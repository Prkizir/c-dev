
#include <stdio.h>
#include <stdlib.h>

int factorial(int n){ // Recursive
  if(n < 0)
    return -1;

  else if(n == 0)
    return 1;

  return factorial(n - 1) * n;
}

int factorial2(int n){ // Iterative
  int f = 1;
  int i;

  for(i = 1; i <= n; i++){
    f *= i;
  }

  return f;
}

int main(int argc, char const *argv[]) {
  printf("Recursive: %d\n", factorial(5));
  printf("Iterative: %d\n", factorial(5));
  return 0;
}
