#include <stdio.h>

int fun(int n){
  printf("%d\n", n);
  if(n > 100){
    return n - 10;
  }

  return fun(fun(n + 11));
}

int main(int argc, char const *argv[]) {
  int r;
  r = fun(30);
  printf("%d\n", r);
  return 0;
}
