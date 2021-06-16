#include <stdio.h>

int fun(int n){ // Question 1
  static int i = 1;

  if(n >= 5)
    return n;

  n += i;
  i++;

  return fun(n);
}

void foo(int n, int sum){ // Question 2
  int k = 0, j = 0;

  if(n == 0)
    return;

  k = n % 10;
  j = n/10;

  sum += k;

  foo(j, sum);
  printf("%d ", k);
}

int f(int *x, int c){ // Question 3
  c -= 1;

  if(c == 0)
    return 1;

  *x += 1;

  return f(x, c) * *x;
}


int fun2(int n){  // Question 4
  int x = 1, k;

  if(n == 1){
    return x;
  }

  for(k = 1; k < n; ++k){
    x = x + fun2(k) * fun2(n - k);
  }

  return x;
}

void count(int n){  // Question 5
  static int d = 1;
  printf("%d ", n);
  printf("%d ", d);

  d++;

  if(n > 1)
    count(n - 1);

    printf("%d ", d);
}

int main(int argc, char const *argv[]) {

  // Question 1
  printf("Question 1 -> Result: %d\n", fun(1));

  // Question 2
  int a = 2048, sum = 0;
  printf("Question 2 -> Result: ");
  foo(a, sum);
  printf("%d\n", sum);

  // Question 3
  int p = 5;
  printf("Question 3 -> Result: %d\n", f(&p, p));

  // Question 4
  printf("Question 4 -> Result: %d\n", fun2(5));

  // Question 5
  printf("Question 5 -> Result: ");
  count(3);
  printf("\n");

  return 0;
}
