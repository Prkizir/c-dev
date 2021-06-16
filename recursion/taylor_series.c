#include <stdio.h>
#include <stdlib.h>

float taylor(float x, float n){
  static float p = 1.0, f = 1.0; // These variables will keep their value
                                 //   during runtime of each of "taylor"
                                 //   function call
  float ans;

  if(n == 0){
    return 1.0;
  }

  ans = taylor(x, n - 1.0); // "p" and "f" change at return time of this call
  p *= x;
  f *= n;

  return ans + p/f;
}


int main(int argc, char const *argv[]) {
  printf("%f\n", taylor(4.0, 50.0));
  return 0;
}
