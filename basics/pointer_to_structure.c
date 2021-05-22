#include <stdio.h>
#include <stdlib.h>

struct Rectangle{
  int length;
  int width;
};

int main(int argc, char const *argv[]) {

  /*
  * Section 1
  */

  // struct Rectangle r = {10, 5};
  // struct Rectangle *p = &r;
  //
  // printf("%d\n", r.length);
  // // r.length = 20; // Direct struct access method
  // // (*p).length = 20; // Pointer struct access method 1
  // p->length = 20; // Pointer struct access method 2 (prefferred)
  //
  // printf("%d\n", r.length);

  /*
  * Section 2: struct in heap
  */

  // struct Rectangle *p;
  // p = (struct Rectangle *)malloc(sizeof(struct Rectangle)); // Dynamic allociation
  //
  // p -> length = 10;
  // p -> width = 5;
  //
  // printf("Length: %d || Width: %d\n", p -> length, p -> width);

  /*
  * Practice
  */

  // struct Rectangle r = {10, 5}; // C++ does not require you to write "struct"
  //
  // printf("%d\n%d\n",r.length, r.width); // Dot operator
  //
  // struct Rectangle *p = &r;
  //
  // printf("%d\n%d\n", p->length, p->width); // Arrow operator

  // Create object in Heap
  struct Rectangle *p;

  p = (struct Rectangle *)malloc(sizeof(struct Rectangle)); // p = new Rectangle in C++

  p->length = 15;
  p->width = 7;

  printf("%d\n%d\n", p->length, p->width); // Arrow operator

  return 0;
}
