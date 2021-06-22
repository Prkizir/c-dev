#include <stdio.h>

int main(int argc, char const *argv[]) {

  // Ways to declare and intiialise an Array

  int a[5]; // Initialised with garbage values in all indeces

  int b[5] = {2, 4, 6, 8, 10}; // Initialised with the respective values
                               //   (manually initialised)

  int c[5] = {2, 4}; // First elements initialised, the remaining are 0s

  int d[5] = {0}; // All elements initialised to 0

  int e[] = {2, 4, 6, 8, 10}; // Size of array equals # of elements

  printf("%d\n", a[2]); // Common access to an index
  printf("%d\n", 2[a]); // Same access as last statement using subscript
  printf("%d\n", *(a + 2)); // Same access as last statement using pointers

  for(int i = 0; i < 5; i++){
    printf("%p\n", (void *) &a[i]); // Printing >> ADRESSES << of memory locations using
                                    //   address notation (remember to void * cast otherwise)
                                    //   undefined behaviour may occur on some compilers
  }

  return 0;
}
