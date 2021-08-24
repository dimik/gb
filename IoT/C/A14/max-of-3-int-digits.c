#include <stdio.h>
#include <math.h>

int maxint(int n) {
    int result = n % 10;
    while (n /= 10) {
        if ((n % 10) > result) {
            result = n % 10;
        }
    }
    return result;
}

int main() {
    int n = 3;
    int max = pow(10, n);
    int min = pow(10, n-1);
    int i;
    int result;

    scanf("%d", &i);

    if (i >= max) {
        printf("Number has more than 3 digit: %d", i);
        return 1;
    }
    if (i < min) {
        printf("Number has less than 3 digit: %d", i);
        return 1;
    }

    result = maxint(i);

    printf("%d", result);

    return 0;
}