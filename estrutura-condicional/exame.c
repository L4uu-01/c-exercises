#include <stdio.h>

float n1, n2, n3, n4, media, notaexame;

int main (){

    printf("digite a primeira nota: ");
    scanf("%f", &n1);

    printf("digite a segunda nota: ");
    scanf("%f", &n2);

    printf("digite a terceira nota: ");
    scanf("%f", &n3);

    printf("digite a quarta nota: ");
    scanf("%f", &n4);

    media = (n1 + n2 + n3 + n4) / 4;

    printf("a media do aluno e: %f\n", media);

    if (media >= 7)
    {
        printf("o aluno foi aprovado!\n");
    }
    else if (media >= 5 && media < 7)
    {
        printf("oi aluno esta de recuperacao!\n");
        printf("digite a nota do exame: ");
        scanf("%f", &notaexame);
        media = (media + notaexame) / 2;
        if (media >= 5)
        {
            printf("o aluno foi aprovado no exame!\n");
        }
        else
        {
            printf("o aluno não foi reprovado no exame!\n");
        }
    }
    else
    {
        printf("o aluno foi reprovado!\n");
    }
}

