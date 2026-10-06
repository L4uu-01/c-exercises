#include <stdio.h>

int main() {
    float altura, maiorAltura, menorAltura;

    for (int i = 1; i <= 5; i++) {
        printf("Digite a altura da pessoa %d: ", i);
        scanf("%f", &altura);

        if (i == 1) {
            maiorAltura = altura;
            menorAltura = altura;
        } else {
            if (altura > maiorAltura) {
                maiorAltura = altura;
            }
            if (altura < menorAltura) {
                menorAltura = altura;
            }
        }
    }

    printf("A maior altura digitada foi: %.2f\n", maiorAltura);
    printf("A menor altura digitada foi: %.2f\n", menorAltura);

    return 0;
}
