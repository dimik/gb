#include <stdio.h>

int max(int a[], int n) {
  int value = a[0];

  for (int i = 1; i < n; i++) {
    if (a[i] > value) {
      value = a[i];
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

    int maxValue = max(arr, n);

    printf("%d", maxValue);

    return 0;
}