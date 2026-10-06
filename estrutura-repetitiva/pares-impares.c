#include <stdio.h>

int i, numero, pares = 0, impares = 0;

main() {
    for (i = 1; i <= 10; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &numero);
        if (numero % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }
    printf("Quantidade de números pares: %d\n", pares);
    printf("Quantidade de números ímpares: %d\n", impares);
}
