#include <stdio.h>
#include <stdlib.h>

struct Rectangle{
  int height;
  int width;
};

struct Test {
  int a[5]; // Must always specify array length
  int n;
};

int area(struct Rectangle r){ // Call by Value
  return r.height * r.width;
}

void changeHeight(struct Rectangle *p, int n_length){ // Call by Address
  p->height = n_length;
}

// int area2(struct Rectangle &r){ // Call by Reference C++ Only
//   return r.height * r.width;
// }

void fun(struct Test t){
  t.a[0] = 10;
  t.a[1] = 9;
}

// Practice

struct Rectangle *fun2(){
  struct Rectangle *p;
  p = (struct Rectangle *)malloc(sizeof(struct Rectangle)); // Allocated in Heap

  p->height = 15;
  p->width = 7;

  return p; // Returns address of structure
}

int main(int argc, char const *argv[]) {
  struct Rectangle r = {10, 5};
  printf("Area of rectangle: %d\n", area(r));

  changeHeight(&r, 20);

  printf("Area of New Rectangle: %d\n", area(r));

  struct Test t = {
                    {2, 4, 6, 8, 10},
                    5
                  };

  fun(t); // You can pass an Array by Value through Structures

  struct Rectangle *ptr = fun2();

  printf("Height: %d, Width: %d\n", ptr->height, ptr->width);

  return 0;
}
