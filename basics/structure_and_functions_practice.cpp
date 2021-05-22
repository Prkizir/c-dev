#include <iostream>
#include <stdio.h>

using namespace std;

struct Rectangle{
  int height;
  int width;
};

void init(struct Rectangle * r, int height, int width){ // v2
  r->height = height;
  r->width = width;
}

int area(struct Rectangle r){
  return r.height * r.width;
}

int perimeter(struct Rectangle r){ // in C++ struct keyword not necessary
  return 2 * (r.height + r.width);
}

int main(int argc, char const *argv[]) {
  Rectangle r = {0, 0};

  int height, width; // v2
  printf("Enter Height and Width:\n");
  // cin >> r.height >> r.width; v1

  init(&r, height, width); // v2

  int a = area(r);
  int p = perimeter(r);

  printf("Area: %d\nPerimeter: %d\n", a, p);

  return 0;
}
