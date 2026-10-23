#include <stdio.h>

int n, pessoasMenor16;
float somaAltura = 0, mediaAltura, perc16;

int main(int argc, char const *argv[])
{
    printf("quantas pessoas serao digitadas?");
    scanf("%d", &n);

    char nome[n][50];
    float altura[n];
    int idade[n];

    for (int i = 0; i < n; i++)
    {
        printf("nome:");
        fflush(stdin);
        fgets(nome[i], 50, stdin);

        printf("idade:");
        scanf("%d", &idade[i]);

        if (idade[i]<  16)
        {
            pessoasMenor16++;
        }
        
        printf("altura:");
        scanf("%f", &altura[i]);
        
        somaAltura = somaAltura + altura[i];
    }
    
    mediaAltura = somaAltura / n;
    printf("media das alturas: %.2f\n", mediaAltura);

    perc16 = ((float)pessoasMenor16 / n) * 100;
    printf("pessoas com menos de 16 anos: %f\n", perc16);

    for (int i = 0; i < n; i++)
    {
        if (idade[i] < 16)
        {
            printf("%s", nome[i]);
        }
        
    }
    

    return 0;
}
