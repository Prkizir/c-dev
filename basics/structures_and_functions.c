#include <stdio.h>
#include <stdlib.h>

struct Rectangle{
  int height;
  int width;
};

void ini(struct Rectangle *r, int height, int width){
  r->height = height;
  r->width = width;
}

int area(struct Rectangle r){
  return r.height * r.width;
}

void change_height(struct Rectangle * r, int new_height){
  r->height = new_height;
}

int main(int argc, char const *argv[]) {
  struct Rectangle r;
  int a;

  ini(&r, 10, 5);

  a = area(r);
  printf("First Area: %d\n", a);

  change_height(&r, 20);

  a = area(r);
  printf("New Area: %d\n", a);

  return 0;
}
