#include <stdlib.h>
#include <stdio.h>

// Always reduce and reuse as many code blocks as you can
//  through functions (Modular/Procedural Programming)

int add(int a, int b){
  int c;
  c = a + b;

  return c;
}

int main(int argc, char const *argv[]) {
  int num1 = 10, num2 = 15, sum;

  sum = add(num1, num2);

  printf("Sum of %d and %d equals %d\n", num1, num2, sum);
  return 0;
}
