#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int exponent(int m, int n){ // Recursive
  if(n == 0)
    return 1;

  return exponent(m, n - 1) * m;

}

int exponent2(int m, int n){ // Faster Recursion
  if(n == 0)
    return 1;

  if((n % 2) == 0)
    return exponent2(m * m, n/2);
  else
    return m * exponent2(m * m, (n - 1)/2);
}

int main(int argc, char const *argv[]) {

  int ans = 0;

  clock_t begin = clock();
  ans = exponent(2, 9);
  clock_t end = clock();
  double time_dif = (double)(end - begin)/CLOCKS_PER_SEC;

  printf("Recursive: %d, time: %f\n", ans, time_dif);

  begin = clock();
  ans = exponent2(2, 100);
  end = clock();
  time_dif = (double)(end - begin)/CLOCKS_PER_SEC;

  printf("Faster Recursion: %d, time: %f\n", exponent2(2, 100), time_dif);
  return 0;
}
