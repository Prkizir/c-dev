#include <stdio.h>

int x = 0; // You can define static global variables as well
           //   They are automatically initialized to 0 if not defined

int fun(int n){
  // static int x = 0; // Static variables inside a function are only
                       //   accessible within the scope of the function
                       //   where the static variable is created and will remain
                       //   the same throughout all calls of that same function.
  if(n > 0){
    x++;
    return fun(n - 1) + x;
  }

  return 0;
}

int main(int argc, char const *argv[]) {
  int r;

  r = fun(5);
  printf("%d\n", r);

  r = fun(5);
  printf("%d\n", r);

  return 0;
}
