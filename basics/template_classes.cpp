#include <iostream>

using namespace std;

// class Arithmetic{ // Static Class
//   private:
//     int a;
//     int b;
//
//   public:
//     Arithmetic(int a, int b);
//     int add();
//     int sub();
// };
//
// Arithmetic :: Arithmetic(int a, int b){
//   this->a = a;
//   this->b = b;
// }
//
// int Arithmetic :: add(){
//   return a + b;
// }
//
// int Arithmetic :: sub(){
//   return a - b;
// }

// Generic Class
template <class T> // Template Class
class Arithmetic{
  private:
    T a;
    T b;

  public:
    Arithmetic(T a, T b);
    T add();
    T sub();
};

template <class T> // Must also write template
Arithmetic<T> :: Arithmetic(T a, T b){
  this->a = a;
  this->b = b;
}

template <class T>
T Arithmetic<T> :: add(){
  return a + b;
}

template <class T>
T Arithmetic<T> :: sub(){
  return a - b;
}

int main(int argc, char const *argv[]) {
  Arithmetic<int> ar(10, 5); // Becomes int class (You can use any)
                             //   primitive type

  cout << "Integer: " << ar.add() << endl;

  Arithmetic<float> ar1(1.5, 1.2);
  cout << "Float: " << ar1.add() << endl;

  return 0;
}
