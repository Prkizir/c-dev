#include <stdio.h>
#include <stdlib.h>

struct Rectangle{
  int length;
  int width;
  char x; // Uses 1 byte out of 4
};

struct Complex{
  int real;
  int imaginary;
};

struct Student{
  int roll;
  char name[25];
  char dept[10];
  char address[50];
};

struct Card{
  int face;
  int shape;
  int color;
};

int main(int argc, char const *argv[]) {
  // struct Rectangle r; // Declaration
  struct Rectangle r = {10, 5}; // Declaration + Initialisation
  //
  // r.length = 15;
  // r.width = 10;
  //
  // printf("Area of Rectangle: %i", r.length * r.width);

  printf("%d\n", r.length);
  printf("%d\n", r.width);

  // return 0;
}
