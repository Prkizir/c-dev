#include <stdio.h>
#include <stdlib.h>

int sum(int n){ // Recursive
  if(n == 0)
    return 0;
  else
    return sum(n - 1) + n;
}

int sum2(int n){ // Iterative
  int s = 0;
  int i;

  for(i = 1; i <= n; i++){
    s += i;
  }

  return s;
}

int main(int argc, char const *argv[]) {

  int n = 5;

  int x = sum(n);
  printf("Recursive: %d\n", x);

  x = sum2(n);
  printf("Iterative: %d\n", x);

  return 0;
}
