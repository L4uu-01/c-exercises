#include <stdio.h>

int potencia = 1, base, exponente;

int main(){
    printf("digite sua base: ");
    scanf("%d", &base);
    printf("digite seu expoente: ");
    scanf("%d", &exponente);

    for(int i = exponente; i > 0; i--){
        potencia *= base;
    }
    printf("A potência de %d elevado a %d é: %d\n", base, exponente, potencia);
    return 0;
}
