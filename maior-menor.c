#include <stdio.h>

int maiorNumero = 0, numero, menor = 0;

int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 5; i++)
    {
        printf("digite um numero:");
        scanf("%d", &numero);
        if (i == 1)
        {
            maiorNumero = numero;
            menor = numero;

            if (numero > maiorNumero)
            {
                maiorNumero = numero;
            }       

            if (numero < menor)
            {
                menor = numero;
            }
        }

    }

    printf("o maior numero e: %d", maiorNumero);

    printf("o menor numero e: %d", menor);
    
    return 0;
}
