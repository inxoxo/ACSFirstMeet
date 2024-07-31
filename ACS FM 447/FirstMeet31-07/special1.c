#include <stdio.h>

int main() {
  int arr[10], i, j, x = 0, y = 0, count = 0;

  for (i = 0; i < 10; i++) {
    scanf("%d", &arr[i]);
  }

  for (i = 0; i < 0; i++) {
    for (j = 0; j < 0; j++) {
      if (arr[i] == arr[j]) {
        count++;
      }
      if (count > x) {
        x = count;
        y = i;
      }
    }
  }

  printf("Mode = %d", arr[y]);
  return 0;
}