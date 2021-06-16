#include <stdio.h>
#include <stdlib.h>

float taylor(float x, float n){ // Recursive
  static float ans = 1;

  if(n == 0){
    return ans;
  }

  ans = 1.0 + (x/n) * ans;

  return taylor(x, n - 1.0);
}

float taylor2(float x, float n){ // Iterative
  float ans = 1.0;

  // while(n > 0){
  //   ans = 1 + (x/n)*ans;
  //   n--;
  // }

  for(; n > 0; n--){ // I can use for loop without counter initialisation
    ans = 1 + (x/n)*ans;
  }

  return ans;
}

int main(int argc, char const *argv[]) {
  printf("%f\n", taylor(4.0, 50.0));
  return 0;
}
