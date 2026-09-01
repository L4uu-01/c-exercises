#include <stdio.h>

int idades, media, soma = 0, quantidade = 0;

int main(int argc, char const *argv[])
{
  printf("digite as idades: ");
  while (idades >= 0){
    scanf ("%d", &idades);
    if (idades < 0){
        break;
    }
    soma += idades;
    quantidade++;
    }
    
    if (quantidade > 0){
        media = soma / quantidade;
        printf("media das idades: %d\n", media);
    }
    else{
        printf("IMPOSSIVEL CALCULAR A MEDIA\n");    
    }
  
}
