#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

// This Swap Happens only inside the function
void swap(int x, int y){
  int tmp;
  tmp = x;
  x = y;
  y = tmp;
}

// Swap using pointers, modifies actual values
void swap2(int *x, int *y){
  int tmp;
  tmp = *x;
  *x = *y;
  *y = tmp;
}

// Swap using reference in C++
void swap3(int &x, int &y){ // Just add ampersand (reference)
  int tmp;
  tmp = x;
  x = y;
  y = tmp;
}

int main(int argc, char const *argv[]) {
  int a, b;
  a = 10;
  b = 20;

  printf("a = %d, b = %d\n", a, b);

  /*
  * Section 1: Pass by value
  */
  swap(a, b); // Do not change actual parameters

  printf("a = %d, b = %d\n", a, b);

  /*
  * Section 2: Pass by address
  */

  swap2(&a, &b); // Pass memory address of "a" and "b"

  printf("a = %d, b = %d\n", a, b);

  /*
  * Section 3: Pass by reference
  */

  a = 10;
  b = 20;

  swap3(a, b);

  cout << "a = " << a << ", b = " << b << endl;

  // Use call by address when modifying multiple variables or using
  //  structures

  return 0;
}
