#include <stdio.h>

int main(){
    int Score;

    scanf("%d",&Score);
    if (Score >= 80)
    {
        printf("Grade :A");
    }
    else if (Score >= 75 && Score < 80)
    {
        printf("Grade :B+");
    }
    else if (Score >= 70 && Score < 75)
    {
        printf("Grade :B");
    }
    else if (Score >= 65 && Score < 70)
    {
        printf("Grade :C+");
    }
    else if (Score >= 60 && Score < 65)
    {
        printf("Grade :C");
    }
    else if (Score >= 55 && Score < 60)
    {
        printf("Grade :D+");
    }
    else if (Score >= 50 && Score < 55)
    {
        printf("Grade :D");
    }
    else{
        printf("Grade :F");
    }

    return 0;
}