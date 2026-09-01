#include <stdio.h>

int x, y;

int main(int argc, char const *argv[])
{
    
    while (1)
    {
        printf("Digite dois numeros:  ");
        scanf("%d %d", &x, &y); 

        if (x > y)
        {
            printf("Decrescente\n");
        }
        else if (x < y)
        {
            printf("Crescente\n");
        }
        else
        {
            printf("Iguais\n");
            break;
        }

    }
    
    return 0;
}
