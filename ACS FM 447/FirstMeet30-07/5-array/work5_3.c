#include <stdio.h>

int main() {
  int num[10], x;

  for (int i = 0; i < 10; i++) {
    scanf("%d", &num[i]);
  }

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (num[i] > num[j]) {
        x = num[i];
        num[i] = num[j];
        num[j] = x;
      }
    }
  }
  printf("Array after sorting :\n");

  for (int i = 0; i < 10; i++) {
    printf("%d ", num[i]);
  }

  return 0;
}