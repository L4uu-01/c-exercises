#include <stdio.h>

int n;
float somaMedia = 0, media, reais;

main(){
    printf("quantos elementos vai ter o vetor?");
    scanf("%d", &n);

    float real[n];

    for (int i = 0; i < n; i++)
    {
        printf("digite um numero:");
        scanf("%f", &real[i]);

        somaMedia = somaMedia + real[i];
    }
    
    media = somaMedia / n;

    printf("media do vetor: %.3f\n", media);

    
    real[n] = reais;

    if (reais < media)
    {
        printf("elementos abaixo da media:");

        for (int i = 0; i < n; i++)
        {
            printf("%.2f\n", real[i]);
        }
        
    }
    
}
