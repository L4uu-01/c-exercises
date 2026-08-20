#include <stdio.h>
#include <locale.h>

float num1, num2, r;
int op;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    printf("digite o primeiro numero:");
    scanf("%f", &num1);

    printf("digite o segundo numero:");
    scanf("%f", &num2);

    printf("\nescolha uma destas opcoes:");
    printf("\nopcao 1 - soma");
    printf("\nopcao 2 - subtracao");
    printf("\nopcao 1 - multiplicacao");
    printf("\nopcaoo 1 - divisao");
    scanf("%i", &op);

    if (0 < op && op < 5)
    {
        if (op == 1)
        {
            r = num1 + num2;
            printf("%.2f", r);
        }
        else if (op == 2) {
            r = num1 - num2;
            printf("%.2f", r);
        }
        else if (op == 3){
            r = num1 * num2;
            printf("%.2f", r);
        }
        else {
            r = num1 / num2;
            printf("%.2f", r);
        }
        
    }
    else{
        printf("erro");
    }

    return 0;
}
