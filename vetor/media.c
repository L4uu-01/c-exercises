#include <stdio.h>

float media, soma = 0;
int n;

int main(int argc, char const *argv[])
{
    printf("quantos numeros voce vai digitar?");
    scanf("%d", &n);

    float vetor[n];

    for (int i = 0; i < n; i++)
    {
        printf("digite um numero:");
        scanf("%f", &vetor[i]);

        soma = soma + vetor[i];
    }
    
    media = soma / n;

    printf("media: %f", media);

    return 0;
}
