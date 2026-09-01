#include <stdio.h>
 
int n1, divisores;

int main (){
    printf("digite um numero: ");
    scanf("%d", &n1);

    for (int i = 1; i <= n1; i++)
    {
        if (n1 % i == 0)
        {
            divisores++;
        }
        
        if (divisores == 2)
        {
            printf("o numero %d e primo\n", n1);
        }
        else
        {
            printf("o numero %d nao e primo\n", n1);
        }
    
    }
    
}
