#include <iostream>
#include <stdio.h>

using namespace std;

int area(int height, int width){
  return height * width;
}

int perimeter(int height, int width){
  return 2 * (height + width);
}

int main(int argc, char const *argv[]) {
  int height = 0, width = 0; // Best to initialise variables
  printf("Enter Height and Width:\n");
  cin >> height >> width;

  int a = area(height, width);
  int p = perimeter(height, width);

  printf("Area: %d\nPerimeter: %d\n", a, p);

  return 0;
}
