#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

  // Static Array

  int a[5]; // Size decided at compile time, allocated at runtime
            //  memory cannot be allocated at compile time

  // Dynamic Array

  int * b = (int *)malloc(5 * sizeof(int)); // Heap memory accessed indirectly
       // = new int[5]; // in C++

  // delete []b; // in C++
  free(b); // Release memory to avoid memory leaks

  a[0] = 5; // in Stack
  b[0] = 5; // in Heap

  return 0;
}
