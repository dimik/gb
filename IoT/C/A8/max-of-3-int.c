#include <stdio.h>

int max(int a[], int n) {
  int value = 0;

  for (int i = 0; i < n; i++) {
    if (a[i] > value) {
      value = a[i];
    }
  }

  return value;
}

int main() {
    int arr[3], n;

    // printf("Enter three integer:\n");
    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);

    n = sizeof(arr) / sizeof(arr[0]);
    int maxValue = max(arr, n);

    printf("%d", maxValue);

    return 0;
}