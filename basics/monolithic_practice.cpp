#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int height = 0, width = 0; // Best to initialise variables
  printf("Enter Height and Width:\n");
  cin >> height >> width;

  int area = height * width;
  int perimeter = 2 * (height + width);

  printf("Area: %d\nPerimeter: %d\n", area, perimeter);

  return 0;
}
