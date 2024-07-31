#include <stdio.h>

int main() {
  int num[5];
  int sum = 0;

  for (int i = 0; i < 5; i++) {
    scanf("%d", &num[i]);
    sum += num[i];
  }
  printf("Sum of entered numbers: %d\n", sum);
  printf("Numbers in array: ");

  for (int i = 0; i < 5; i++) {
    printf("%d ", num[i]);
  }

  return 0;
}