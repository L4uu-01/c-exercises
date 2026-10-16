#include <stdio.h>

int numero;

int main(int argc, char const *argv[])
{
    printf("digite um numero:");
    scanf("%d", &numero);

    for (int i = 1; i <= numero; i++)
    {
        if (numero % i == 0)
        {
            printf("%d\n", i);
        }
        
    }
    
    return 0;
}
