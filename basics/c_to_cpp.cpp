#include <stdio.h>
#include <stdlib.h>

class Rectangle{ // Object Oriented

  // Important to declare access type (private/public/protected)

  // Private:
  private:
    int _height;
    int _width;

  // Public:
  public:

    // Constructors can be public, private or default
    //    Private constructors are used for singleton isntances
    //    of a class at a time

    Rectangle(int height, int width){ // Better use a constructor for
      _height = height;               //  initialization than a function
      _width = width;                 //  to do that
    }

    void ini(int height, int width){
      _height = height;
      _width = width;
    }

    int area(){
      return _height * _width;
    }

    void change_height(int new_height){
      _height = new_height;
    }

};

int main(int argc, char const *argv[]) {
  Rectangle r(10, 5); // Rectangle r(10, 5) through constructor
  int a;

  // r.ini(10, 5);

  a = r.area();
  printf("First Area: %d\n", a);

  r.change_height(20);

  a = r.area();
  printf("New Area: %d\n", a);

  return 0;
}
