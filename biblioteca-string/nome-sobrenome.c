#include <stdio.h>
#include <string.h>

char nome[] = "Laura";
char sobrenome[] = "Silva";

int main() {
    printf("O nome e: %s\n", nome);
    printf("O tamanho do nome e: %lu\n", strlen(nome));

    printf("O sobrenome e: %s\n", sobrenome);
    printf("O tamanho do sobrenome e: %lu\n", strlen(sobrenome));
    
    return 0;
}
