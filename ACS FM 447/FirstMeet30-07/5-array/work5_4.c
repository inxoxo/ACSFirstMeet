#include <stdio.h>

int main() {
  int arr[] = {50, 30, 80, 10, 40, 90, 20, 70, 60, 100}, Value;

  scanf("%d", &Value);

  for (int i = 0; i < 10; i++) {
    if (Value == arr[i]) {
      printf("Value %d found at index %d", Value, i);
      return 0;
    }
  }

  printf("Value %d not found in the array\n", Value);

  return 0;
}