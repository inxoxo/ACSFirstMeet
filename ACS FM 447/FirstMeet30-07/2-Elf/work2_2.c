#include <stdio.h>

int main() {
    int Year;

    scanf("%d", &Year);

    if ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0)) {
        printf("%d is a leap year. February has 29 days.", Year);
    }
    else {
        printf("%d is not a leap year. February has 28 days.", Year);
    }
    
    return 0;
}