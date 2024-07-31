#include <stdio.h>

int main() {
    float Weight ,Height ,BMI;

    scanf("%f" ,&Weight);
    scanf("%f" ,&Height);
    BMI = Weight/(Height*Height);

    printf("Your BMI is %.2f\n" ,BMI);
    if (BMI > 30)
    {
        printf("You are obese.");
    }
    else if (BMI >= 25.0 && BMI <= 29.9)
    {
        printf("You are overweight.");
    }
    else if (BMI >= 18.5 && BMI <= 24.9)
    {
        printf("You are normal weight.");
    }
    else{
        printf("You are underweight.");
    }
    
    return 0;
}