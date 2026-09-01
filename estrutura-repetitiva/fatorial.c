#include <stdio.h>

int n;

int main(){
    printf("digite um numero: ");
    scanf("%d", &n);

    int fatorial = 1;

    for (int i = 1; i <= n; i++)
    {
        fatorial *= i;
    }

    printf("o fatorial de %d e: %d\n", n, fatorial);

    return 0;
}
