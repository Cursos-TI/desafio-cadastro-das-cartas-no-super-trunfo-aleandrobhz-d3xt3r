#include <stdio.h>
#include <string.h>

// Definição da struct para representar uma carta do Super Trunfo
typedef struct {
    char estado;
    char codigo_carta[4]; // Ex: A01, B03
    char nome_cidade[50];
    int populacao;
    float area_km2;
    float pib_bilhoes;
    int num_pontos_turisticos;
} CartaSuperTrunfo;

// Função para ler os dados de uma carta
void lerCarta(CartaSuperTrunfo *carta, int numero_carta) {
    printf("\n--- Dados da Carta %d ---\n", numero_carta);
    
    // Entrada de dados
    printf("Estado (A-H): ");
    scanf(" %c", &carta->estado);
    
    printf("Codigo da Carta (Ex: A01): ");
    scanf("%s", carta->codigo_carta);
    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta->nome_cidade); // Lê a linha inteira, incluindo espaços
    
    printf("Populacao: ");
    scanf("%d", &carta->populacao);
    
    printf("Area (em km²): ");
    scanf("%f", &carta->area_km2);
    
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &carta->pib_bilhoes);
    
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &carta->num_pontos_turisticos);
}

// Função para exibir os dados de uma carta
void exibirCarta(CartaSuperTrunfo carta, int numero_carta) {
    printf("\n--- Carta %d ---\n", numero_carta);
    printf("Estado: %c\n", carta.estado);
    printf("Codigo: %s\n", carta.codigo_carta);
    printf("Nome da Cidade: %s\n", carta.nome_cidade);
    printf("Populacao: %d\n", carta.populacao);
    printf("Area: %.2f km²\n", carta.area_km2);
    printf("PIB: %.2f bilhoes de reais\n", carta.pib_bilhoes);
    printf("Numero de Pontos Turisticos: %d\n", carta.num_pontos_turisticos);
}

int main() {
    CartaSuperTrunfo carta1, carta2;
    
    // Lendo os dados da primeira carta
    lerCarta(&carta1, 1);
    
    // Lendo os dados da segunda carta
    lerCarta(&carta2, 2);
    
    // Exibindo os dados das duas cartas
    exibirCarta(carta1, 1);
    exibirCarta(carta2, 2);
    
    return 0;
}