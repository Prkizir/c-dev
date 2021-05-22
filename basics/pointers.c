#include <stdlib.h>
#include <stdio.h>

struct Rectangle{
  int length;
  int width;
};

int main(int argc, char const *argv[]) {

  /*
  * Section 1
  */

  // int a = 10;
  // int *p; // Does NOT take same size of variable type
  //
  // p = &a;
  //
  // printf("%d\n", a);
  // printf("%d\n", *p);

  /*
  * Section 2
  */

  // Pointers used also to access Heap memory

  // int *p;
  //
  // p = (int *)malloc(5 * sizeof(int)); // Used for memory allocation in Heap

  /*
  * Pointers Practice
  */

  int a = 10;
  int *p = &a;

  // int *p;
  //*p = &a; // Not forbidden (throws Warning) because this
          //    means storing the address that a pointer points to

  printf("First Section:\n\n");
  printf("No pointer: %d\n", a);
  printf("With pointer: %d\n", *p);

  printf("Pointer value: %d. Address of \"a\" pointed by p: %d\n", p, &a);

  int arr[] = {1, 2, 3, 4, 5};
  int *p1 = arr; // Name of array indicates start of array (pointer points
                 //   to the beggining of array)
  // int *p1 = arr[0]; // Alternative to previous statement

  // int *p1 = &arr // Throws Warning, incompatible types of pointers
                    //    Left: int* | Right: int (*)[5], hence incompatible

  printf("\nSecond Section:\n\n");

  printf("Regular Array Access:\n");
  for(int i = 0; i < sizeof(arr)/sizeof(int); i++){
    printf("%d\n", arr[i]);
  }

  printf("\nPointer Stack Array Access:\n");
  for(int i = 0; i < sizeof(arr)/sizeof(int); i++){
    printf("%d\n", p1[i]); // No need of preceding asterisk on p1[n] (throws error)
  }

  printf("\nThird Section:\n\n");

  int *p2;
  p2 = (int *)malloc(5 * sizeof(int)); // Creating array in Heap

  p2[0] = 10; p2[1] = 15; p2[2] = 14; p2[3] = 21; p2[4] = 31;

  printf("%d\n", sizeof(*p2)); // (prints 4)
  printf("%d\n", sizeof(p2)); // (prints 8)
  printf("%d\n", sizeof(&p2)); // (prints 8)
  printf("%d\n", sizeof(p2[0])); // (prints 4)

  printf("\nPointer Heap Array Access:\n");
  for(int i = 0; i < 5; i++){ // Cannot dynamically find the size of the malloc'd array
    printf("%d\n", p2[i]); // No need of preceding asterisk on p1[n] (throws error)
  }

  free(p2); // Can only free() malloc'd memory

  int *p5;
  char *p6;
  float *p7;
  double *p8;
  struct Rectangle *p9;

  printf("\nPointer Sizes:\n"); // All pointers takes the same size (8 bytes x64)
  printf("%d\n", sizeof(p5));
  printf("%d\n", sizeof(p6));
  printf("%d\n", sizeof(p7));
  printf("%d\n", sizeof(p8));
  printf("%d\n", sizeof(p9));

  return 0;
}
