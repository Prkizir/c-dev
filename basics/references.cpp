#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  /*
  * Section 1
  */
  //
  // int a = 10;
  // int &r = a; // Reference must be initialised when declared
  //             //  "r" becomes an alias of "a"
  //
  // cout << a << endl; // 10
  // r++;
  // cout << r << endl; // 11
  // cout << a << endl; // 11

  // Reference used in Parameter Passing (used instead of pointers)

  /*
  * References Practice
  */

  int a = 10;
  int &r = a; // Immutable

  // int b = 20;
  // r = b; // Not initialisation (cannot change reference),
            //   instead, "a" becomes 20

  // cout << a << endl;

  a = 25;

  cout << a << endl << r << endl;

  return 0;
}
