#include <stdio.h>

char nome[20];
int opcao, idade, codigo;

void cadastro();
void listar();
void pesquisar();

int main() {
    do
    {
        printf("====MENU DE CADASTRO====\n");
        printf("1 - Cadastrar novo usuario\n");
        printf("2 - Listar usuarios cadastrados\n");
        printf("3 - Pesquisar usuario\n");
        printf("4 - Sair\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastro();
                break;
            case 2:
                listar();
                break;
            case 3:
                pesquisar();
                break;
            case 4:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 4);
    
    return 0;
}
   


void cadastro() {

    int cadastro = 0; 
  
    printf("Funcao de cadastro chamada.\n");

    printf("Digite o codigo do usuario: ");
    scanf("%d", &codigo);

    printf("Digite o nome do usuario: ");
    fflush(stdin);
    fgets(nome, 20, stdin);

    printf("Digite a idade do usuario: ");
    scanf("%d", &idade);

    cadastro = 1; 
}

void listar() {
  
    if (cadastro == 1 )
    {
        printf("Funcao de listagem chamada.\n");
        printf("Nome: %s", nome);
        printf("Idade: %d\n", idade);
    }
    else {
        printf("Nenhum usuario cadastrado.\n");
    }
    
}

void pesquisar() {

    int encontrado = 0; 
    int codigoPesquisado;

   
    printf("Funcao de pesquisa chamada.\n");
    printf("Digite o codigo do usuario a ser pesquisado: ");
    scanf("%d", &codigoPesquisado);

    if (codigoPesquisado == codigo) {
        printf("Usuario encontrado:\n");
        printf("Nome: %s", nome);
        printf("Idade: %d\n", idade);
        encontrado = 1;
    }
    else {
        printf("Usuario nao encontrado.\n");
    }

}
