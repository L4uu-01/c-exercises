#include <stdio.h>

char op;
float temp;

int main(int argc, char const *argv[])
{
    printf("voce vai digitar a temperatura em qual escala (C/F)?\n");
    scanf("%c", &op);

   if (op == 'c')
   {
        printf("digite a temperatura em C:");
        scanf("%f", &temp);
        temp = ((temp / 5) * 9) + 32; 
        printf("temperatura em F: %.2f\n", temp);
   }
   else {
        printf("digite a temperatura em F:");
        scanf("%f", &temp);
        temp = (5.0 / 9.0) * (temp - 32);
        printf("temperatura em C: %.2f\n", temp);
   }

    return 0;
}
