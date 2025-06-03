// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.
#include <stdio.h>

struct carta {
    int cdCidade;
    char nome[100];
    int populacao;
    float area;
    unsigned int pib;
    unsigned int ptTuristicos;
};

struct carta cartas[100];

unsigned int totalCartas = 0;

void cadastrarCarta();
void listarCartas();
void printMainMenu();

int main() {

    int option = -1;

    while (option != 0) {
        printMainMenu();

        scanf("%d", &option);

        switch (option) {
            case 0:
                printf("\nFim do programa.\n");
                continue;
            case 1:
                cadastrarCarta();
                break;
            case 2:
                listarCartas();
                break;
            default:
                printf("\nOpção inválida");
                break;            
        }
    }

    return 0;
}

void cadastrarCarta() {
    if (totalCartas > 99) {
        printf("\nLimite de cartas atingido.\n");
        return;
    }

    struct carta novaCarta;

    printf("Digite o codigo da cidade: ");
    scanf("%d", &novaCarta.cdCidade);
    
    printf("\nDigite o nome da cidade: ");
    scanf("%s", &novaCarta.nome);

    printf("\nDigite a populacao: ");
    scanf("%d", &novaCarta.populacao);

    printf("\nDigite a area: ");
    scanf("%f", &novaCarta.area);

    printf("\nDigite o pib: ");
    scanf("%d", &novaCarta.pib);

    printf("\nDigite o numero de pontos turisticos: ");
    scanf("%d", &novaCarta.ptTuristicos);

    cartas[totalCartas++] = novaCarta;

    printf("Carta cadastrada em memoria com sucesso!\n");    
}

void listarCartas() {
    printf("\n\n\nListando cartas...");

    for(unsigned int i = 0; i < totalCartas; i++) {
        printf("\n\nCarta numero %d", i + 1);

        struct carta* card = &cartas[i];
        printf("\ncodigo da cidade: %d", card->cdCidade);    
        printf("\nnome da cidade: %s", card->nome);
        printf("\npopulacao: %d", card->populacao);
        printf("\narea: %f", card->area);
        printf("\npib: %d", card->pib);
        printf("\npontos turisticos: %d", card->ptTuristicos);             
    
    }
   
}

void printMainMenu() {
    printf("\n\n\n");
    printf("##########################################################\n");
    printf("#                  Cadastro de cartas                    #\n");
    printf("#                                                        #\n");
    printf("# Escolha uma opção a seguir:                            #\n");
    printf("#                                                        #\n");
    printf("# 1 - Cadastrar nova carta                               #\n");
    printf("# 2 - Listar cartas cadastradas                          #\n");
    printf("# 0 - Sair                                               #\n");
    printf("#                                                        #\n");
    printf("##########################################################\n");
    printf("\nEscolha a opção : ");
}
