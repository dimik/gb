#include <stdio.h>

int main() {
   int i1, i2;

   // printf("Enter three integer:\n");
   scanf("%d %d", &i1, &i2);

   printf("%-d\n", i1 - i2);


   return 0;
}