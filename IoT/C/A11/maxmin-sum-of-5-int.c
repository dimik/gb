#include <stdio.h>

int * maxmin(int a[], int n) {
  static int result[2];
  result[0] = result[1] = a[0];

  for (int i = 1; i < n; i++) {
    if (a[i] > result[0]) {
      result[0] = a[i];
    }
    if (a[i] < value[1]) {
      result[1] = a[i];
    }
  }

  return value;
}

int main() {
    int n = 5;
    int arr[n];
    int i;

    for (i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            return 1;
        }
    }

    int *result = maxmin(arr, n);

    printf("%d", *(result) + *(result + 1));

    return 0;
}