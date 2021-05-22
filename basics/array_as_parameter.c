#include <stdio.h>
#include <stdlib.h>

void fun(int a[], int n){ // Arrays can only be passed by address
  int i;                  //    never by value. Use "[]" when working
  for(i = 0; i < n; i++){ //    with arrays, use "*" as general use
    printf("%d\n", a[i]); //    including arrays
  }
}

int * fun2(int n){ // [] can used only in either C++ or different compiler
  int *p;
  p = (int *)malloc(n * sizeof(int)); // Created in Heap

  return p;
}

// For Each does not work on pointers

int main(int argc, char const *argv[]) {
  int a[5] = {2, 4, 6, 8, 10};
  fun(a, 5);

  int * b;
  b = fun2(5);

  return 0;
}
