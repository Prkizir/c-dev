#include <stdio.h>

void fun(int n){
  if(n > 0){
    printf("%d \n", n);
    fun(n - 1);
  }
}

int main(int argc, char const *argv[]) {
  int x = 3;

  fun(x);

  return 0;
}
