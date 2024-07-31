#include <stdio.h>

int main() {
  float numone;
  float numtwo;
  float numthree;

  scanf("%f", &numone);
  scanf("%f", &numtwo);
  scanf("%f", &numthree);

  printf("%.2f", (numone+numtwo+numthree)/3);

  return 0;
}