#include <iostream>

using namespace std;

class Rectangle{
  private:
    int _height;
    int _width;

  public:
    Rectangle(){
      _height = _width = 0;
    }

    Rectangle(int height, int width){
      _height = height;
      _width = width;
    }

    int area(){
      return _height * _width;
    }

    int perimeter(){
      return 2 * (_height + _width);
    }

    void setHeight(int height){
      _height = height;
    }

    void setWidth(int width){
      _width = width;
    }

    int getHeight(){
      return _height;
    }

    int getWidth(){
      return _width;
    }

    ~Rectangle(){
      cout << "Destructor" << endl;
    }
};

int main(int argc, char const *argv[]) {
  Rectangle r(10, 5);

  cout << "Area: " << r.area() << endl;
  cout << "Perimeter: " << r.perimeter() << endl;
  return 0;
}
