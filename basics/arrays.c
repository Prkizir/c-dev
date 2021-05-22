#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int a[10] = {1,2,3,4,5,6,7}, i;

  for(i = 0; i < sizeof(a)/sizeof(a[i]); i++){
    printf("%i\n", a[i]);
  }

  // printf("%i\n", sizeof(a));
  // printf("%i\n",a[8]);

  return 0;
}
