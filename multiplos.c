#include <stdio.h>

int num1, num2;

int main(int argc, char const *argv[])
{
    printf("digite o primeiro numero:");
    scanf("%i", &num1);
    printf("digite o segundo numero:"); 
    scanf("%i", &num2);

    if (num1 % num2 == 0 || num2 % num1 == 0)
    {
        printf("sao multiplos");
    }
    else
    {
        printf("nao sao multiplos");
    }
    return 0;
}
