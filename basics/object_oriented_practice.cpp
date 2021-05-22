#include <iostream>
#include <stdio.h>

using namespace std;

class Rectangle{
  private:
    int _height;
    int _width;

  public:
    void init(int height, int width){
      _height = height;
      _width = width;
    }

    int area(){
      return _height * _width;
    }

    int perimeter(){
      return 2 * (_height + _width);
    }
};

int main(int argc, char const *argv[]) {
  Rectangle r;

  int height, width;
  printf("Enter Height and Width:\n");
  cin >> height >> width;

  r.init(height, width);

  int a = r.area();
  int p = r.perimeter();

  printf("Area: %d\nPerimeter: %d\n", a, p);

  return 0;
}
