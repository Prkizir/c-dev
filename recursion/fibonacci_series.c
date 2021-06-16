#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n){ // Excessive Recursive O(2^n)
  if(n <= 1){
    return n;
  }

  return fibonacci(n - 2) + fibonacci(n - 1);
}

int fibonacci2(int n){ // Iterative O(n)
  int t0 = 0, t1 = 1, ans;

  if(n <= 1){
    return n;
  }else{
    for(int i = 2; i <= n; i++){
      ans = t0 + t1;
      t0 = t1;
      t1 = ans;
    }
  }

  return ans;
}

int arr[10];

int fibonacci3(int n){ // Memoization Recursive O(n)
  if(n <= 1){
    arr[n] = n;
    return n;
  }else{
    if(arr[n - 2] == -1){
      fibonacci3(n - 2);
    }

    if(arr[n - 1] == -1){
      fibonacci3(n - 1);
    }

    arr[n] = arr[n - 2] + arr[n - 1];

    return arr[n - 2] + arr[n - 1];
  }
}

int main(int argc, char const *argv[]) {

  int n = 5;

  for(int i = 0; i < n; i++){
    arr[i] = -1;
  }

  printf("%d\n", fibonacci3(n));

  // printf("%d\n", fibonacci2(n, arr));
  return 0;
}
