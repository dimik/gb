#include <stdio.h>

int main() {
   int i1, i2, i3;

   // printf("Enter three integer:\n");
   scanf("%d %d %d", &i1, &i2, &i3);

   printf("%d+%d+%d=%d", i1, i2, i3, i1 + i2 + i3);

   return 0;
}