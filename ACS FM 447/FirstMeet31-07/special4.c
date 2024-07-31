#include <stdio.h>

int main() {
  float choice, width, height, base, radius, Rectangle, Triangle, Circle;
  printf("1. Rectangle\n2. Triangle\n3. Circle\n");
  printf("Enter your choice: ");
  scanf("%f", &choice);

  if (choice == 1) {
    printf("Enter the width: ");
    scanf("%f", &width);

    printf("Enter the height: ");
    scanf("%f", &height);

    Rectangle = width * height;

    if (width < 0 || height < 0) {
      printf("The area of the rectangle is: Error");
    } else {
      printf("The area of the rectangle is: %.2f", Rectangle);
    }

  } else if (choice == 2) {
    printf("Enter the base: ");
    scanf("%f", &base);

    printf("Enter the height: ");
    scanf("%f", &height);

    Triangle = ((1.0 / 2.0) * (base * height));

    if (base < 0 || height < 0) {
      printf("The area of the triangle is: Error");
    } else {
      printf("The area of the triangle is: %.2f", Triangle);
    }

  } else if (choice == 3) {
    printf("Enter the radius: ");
    scanf("%f", &radius);

    Circle = 3.14 * (radius * radius);

    if (radius < 0) {
      printf("The area of the circle is: Error");
    } else {
      printf("The area of the circle is: %.2f", Circle);
    }
  } else {
    printf("Invalid choice");
  }

  return 0;
}