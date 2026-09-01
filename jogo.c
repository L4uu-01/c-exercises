#include <stdio.h>

int hi, hf;

int main(int argc, char const *argv[])
{
    printf("hora inicial");
    scanf("%i", &hi);

    printf("hora final:");
    scanf("%i", &hf);

    if (hi < hf)
    {
        printf("o jogo durou %i horas", hf - hi);
    }
    else
    {
        printf("o jogo durou %i horas", 24 - hi + hf);
    }
    return 0;
}
