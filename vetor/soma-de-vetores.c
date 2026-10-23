#include <stdio.h>

int n, i;

main(){
    printf("quantos valores vai ter cada vetor??");
    scanf("%d", &n);

    int vetorA[n], vetorB[n], vetorC[n];
    
    for (int i = 0; i < n; i++)
    {
        printf("digite os valores de A:");
        scanf("%d", &vetorA[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("digite os valores de B:");
        scanf("%d", &vetorB[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        vetorC[i] = vetorA[i] + vetorB[i];
    }
    
    printf("soma:");

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", vetorC[i]);
    }

}
