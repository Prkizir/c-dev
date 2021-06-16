#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


void hanoi(int n, char a, char b, char c){
  static int moves = 0;

  if(n > 0){
    hanoi(n - 1, a, c, b);
    printf("%d. move from %c to %c\n", ++moves, a, c);
    hanoi(n - 1, b, a, c);
  }
}

int main(int argc, char const *argv[]) {

  if(argc != 2){
    printf("usage: hanoi [n_disks]\n");
    return -1;
  }

  int n = atoi(argv[1]);

  if(n <= 0){
    printf("[n_disks] must be bigger than 0\n");
    return -1;
  }

  clock_t begin = clock();
  hanoi(n, 'a', 'b', 'c');
  clock_t end = clock();

  printf("%f\n", (double)(end - begin)/CLOCKS_PER_SEC);
  return 0;
}
