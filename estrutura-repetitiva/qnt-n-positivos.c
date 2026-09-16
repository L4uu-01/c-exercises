#include <stdio.h>

int numero, positivos;

int main(){
    for (int i = 1; i <= 10; i++)
    {
        printf("digite um numero");
        scanf("%d", &numero);

        if (numero > 0)
        {
            positivos ++;
        }
        
    }
    printf("a quantidade de numeros positivos e: %d", positivos);
}
