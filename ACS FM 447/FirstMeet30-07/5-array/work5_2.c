#include <stdio.h>

int main() {
  int num[10], max, min;

  for (int i = 0; i < 10; i++) {
    scanf("%d", &num[i]);
  }

  max = num[0];
  min = num[0];

  for (int i = 1; i < 10; i++) {
    if (num[i] > max) {
      max = num[i];
    }
    if (num[i] < min) {
      min = num[i];
    }
  }
  printf("Maximum number: %d\n", max);
  printf("Minimum number: %d\n", min);

  return 0;
}