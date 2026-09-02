#include <stdio.h>

float vPermitida, vMotorista;

int main (){
    printf("digite a velocidade permitida: ");
    scanf("%f", &vPermitida);

    printf("digite a velocidade do motorista: ");
    scanf("%f", &vMotorista);

    if (vMotorista > vPermitida * 1.2)
    {
        printf("Multa gravissima!\n");
    }
    else if (vMotorista > vPermitida)
    {
        printf("Multa grave!\n");
    }
    else
    {
        printf("velocidade permitida!\n");
    }
}
