#include <stdio.h>

double mean(int a[], int n) {
  double avg = 0.0;

  for (int i = 0; i < n; i++) {
    avg += (a[i] - avg) / (i + 1);
  }

  return avg;
}

int main() {
   int arr[3], n;

   // printf("Enter three integer:\n");
   scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);

   n = sizeof(arr) / sizeof(arr[0]);
   double avg = mean(arr, n);

   printf("%.2f", avg);

   return 0;
}