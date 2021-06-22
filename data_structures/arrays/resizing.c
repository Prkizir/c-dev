#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int * p = (int *)malloc(5 * sizeof(int));

  p[0] = 3; p[1] = 6; p[2] = 9; p[3] = 12; p[4] = 15;

  printf("Before: ");
  for(int i = 0; i < 5; i++){
    printf("%d ", p[i]);
  }

  // Increase size of * p

  int * v = (int *)malloc(10 * sizeof(int));

  for(int i = 0; i < 5; i++){ // Copy elements from old array to new array
    v[i] = p[i];
  }

  free(p); // Avoid memory leaks

  p = v; // p * is now size 10

  v = NULL; // Free pointer using NULL

  p[5] = 18; p[6] = 21; p[7] = 24; p[8] = 27; p[9] = 30;

  printf("\nAfter: ");
  for(int i = 0; i < 10; i++){
    printf("%d ", p[i]);
  }

  printf("\n");

  free(p);

  p = NULL; // Safe

  return 0;
}
