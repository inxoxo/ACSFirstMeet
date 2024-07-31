#include <stdio.h>

int main(){
    int x = 0 ,i = 1 ,j ,Sum;
    printf("%d %d" ,x ,i);
    for (j = 0; j < 8 ; j++)
    {
        Sum = x+i;
        printf(" %d" ,Sum);
        x = i;
        i = Sum;
    }
    

    return 0;
}