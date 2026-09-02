#include <stdio.h>

float n1, n2, n3, media, mediaGeral = 0, maiorMedia = 0, menorMedia = 10;
int nota = 0, aprovados = 0, reprovados = 0, recuperacao = 0;
char aluno[20];

int main(){
    for (int i = 0; i < 5; i++)
    {
        printf("digite o nome do aluno: ");
        fflush(stdin);
        fgets(&aluno, 20, stdin);

        printf("digite a primeira nota: ");
        scanf("%f", &n1);

        printf("digite a segunda nota: ");
        scanf("%f", &n2);

        printf("digite a terceira nota: ");
        scanf("%f", &n3);

        nota ++;

        media = (n1 + n2 + n3) / 3;
        printf("a media do aluno e: %f\n", media);

        if (media >= 7)
        {
            printf("o aluno foi aprovado!\n");
            aprovados ++;
        }
        else if (media >= 5 && media < 7)
        {
            printf("o aluno esta de recuperacao!\n");
            recuperacao ++;
        }
        else
        {
            printf("o aluno foi reprovado!\n");
            reprovados ++;
        }
        
        
    }
    
    if (media > maiorMedia)
    {
        maiorMedia = media;
    }
    else if (media < menorMedia)
    {
        menorMedia = media;
    }
        
    mediaGeral = mediaGeral / nota;
    printf("a media geral da turma e: %f\n", mediaGeral);
    printf("o numero de alunos aprovados e: %d\n", aprovados);
    printf("o numero de alunos em recuperacao e: %d\n", recuperacao);
    printf("o numero de alunos reprovados e: %d\n", reprovados);
    printf("maior media: %f\n", maiorMedia);
}
