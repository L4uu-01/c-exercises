#include <stdio.h>
float n1, n2, media;

int main (){
    printf("digite a primeira nota: ");
    scanf("%f", &n1);
    printf("digite a segunda nota: ");
    scanf("%f", &n2);

    while (n1 < 0 || n2 < 0)
    {
        printf("nota invalida, digite novamente: \n");
        if (n1 < 0)
        {
            printf("digite a primeira nota: ");
            scanf("%f", &n1);
        }
        if (n2 < 0)
        {
            printf("digite a segunda nota: ");
            scanf("%f", &n2);
        }
        
    }

    media = (n1 + n2) / 2;
    printf("a media e: %.2f\n", media);

    return 0;
}
