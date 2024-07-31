#include <stdio.h>

int main() {
    int Num ,Sum;

    scanf("%d" ,&Num);

    for (int i = 1; i < 13; i++)
    {
        Sum = Num*i;
        printf("%d * %d = %d\n" ,Num ,i ,Sum);
    }

    return 0;  
}