#include <stdio.h>

void printRoof(rows) {
   int i, space, k = 0;
   for (i = 1; i <= rows; ++i, k = 0) {
      for (space = 1; space <= rows - i; ++space) {
         printf(" ");
      }
      while (k != 2 * i - 1) {
         printf("*");
         ++k;
      }
      printf("\n");
   }
}

int main() {
  printRoof(4);
  printf(" HHOHH\n");
  printf(" ZZZZZ\n");
  return 0;
}


