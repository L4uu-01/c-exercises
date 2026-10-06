#include <stdio.h>

int somatorioImpar = 0;

int main(){
    for (int i = 1; i <= 50; i++)
    {
        if (i % 2 != 0)
        {
            somatorioImpar += i;
        }
    }
    printf("Somatório dos números ímpares: %d\n", somatorioImpar);
}
