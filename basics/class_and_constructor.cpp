#include <iostream>

using namespace std;

class Rectangle{
  private:
    int _height;
    int _width;

  public:
    Rectangle(){ // Default Constructor
      _height = _width = 1;
    }

    Rectangle(int height, int width); // Overloaded Constructor
    int area(); // Facilitator
    int perimeter(); // Facilitator

    int getHeight(){ // Accessor
      return _height;
    }

    void setHeight(int height){ // Mutator
      _height = height;
    }

    ~Rectangle(); // Destructor
};

Rectangle :: Rectangle(int height, int width){ // :: scope resolution
    _height = height;
    _width = width;
}

int Rectangle :: area(){
  return _height * _width;
}

int Rectangle :: perimeter(){
  return 2 * (_height + _width);
}

Rectangle :: ~Rectangle(){ // Automatically called after end of scope

}

int main(int argc, char const *argv[]) {
  Rectangle r(10, 5);

  cout << "Area: " << r.area() << endl;
  cout << "Perimeter: " << r.perimeter() << endl;

  r.setHeight(20);

  cout << "New Height: " << r.getHeight() << endl;

  return 0;
}
