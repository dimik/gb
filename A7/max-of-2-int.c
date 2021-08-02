#include <stdio.h>

void swap(int* a, int* b) {
//    int temp = *a;
//    *a = *b;
//    *b = temp;

    // For XOR swap it's important to handle if a/b share the same reference
    if (a != b) {
       *a ^= *b;
       *b ^= *a;
       *a ^= *b;
    }
}

int main() {
    int i1, i2;
    const char * str = "This is a string literal. See the double quotes?";
    // printf("Enter three integer:\n");
    scanf("%d %d", &i1, &i2);

    if (i1 > i2) {
      swap(&i1, &i2);
    }
printf("%s", str);
    printf("%d %d\n", i1, i2);


    return 0;
}