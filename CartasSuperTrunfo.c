#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
        char estado1;
        char codigo1[4];
        char nomeCidade1[100];
        int populacao1;
        float area1;
        float pib1;
        int pontos1;
    
        char estado2;
        char codigo2[4];
        char nomeCidade2[100];
        int populacao2;
        float area2;
        float pib2;
        int pontos2;
    
        // Entrada dos dados da primeira carta
        printf("Carta 1\n");
        printf("Digite o Estado (A-H): ");
        scanf(" %c", &estado1);
        printf("Digite o Código da Carta (ex: A01): ");
        scanf("%s", codigo1);
        printf("Digite o Nome da Cidade: ");
        scanf(" %[^\n]", nomeCidade1);
        printf("Digite o População: ");
        scanf("%d", &populacao1);
        printf("Digite o Área (km²): ");
        scanf("%f", &area1);
        printf("Digite o PIB: ");
        scanf("%f", &pib1);
        printf("Digite o Número de Pontos Turísticos: ");
        scanf("%d", &pontos1);
    
        printf("\n");
    
        // Entrada dos dados da segunda carta
        printf("Carta 2\n");
        printf("Digite o Estado (A-H): ");
        scanf(" %c", &estado2);
        printf("Digite o Código da Carta (ex: B02): ");
        scanf("%s", codigo2);
        printf("Digite o Nome da Cidade: ");
        scanf(" %[^\n]", nomeCidade2);
        printf("Digite o População: ");
        scanf("%d", &populacao2);
        printf("Digite o Área (km²): ");
        scanf("%f", &area2);
        printf("Digite o PIB: ");
        scanf("%f", &pib2);
        printf("Digite o Número de Pontos Turísticos: ");
        scanf("%d", &pontos2);
    
        printf("\n");
    
        // Exibindo os dados
        printf("=== Cartas Cadastradas ===\n");
    
        printf("\nCarta 1:\n");
        printf("Estado: %c\n", estado1);
        printf("Código: %s\n", codigo1);
        printf("Cidade: %s\n", nomeCidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %.2f km²\n", area1);
        printf("PIB: R$ %.2f\n", pib1);
        printf("Pontos Turísticos: %d\n", pontos1);
    
        printf("\nCarta 2:\n");
        printf("Estado: %c\n", estado2);
        printf("Código: %s\n", codigo2);
        printf("Cidade: %s\n", nomeCidade2);
        printf("População: %d\n", populacao2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: R$ %.2f\n", pib2);
        printf("Pontos Turísticos: %d\n", pontos2);
    
        
    // Sugestão: Defina variávei\s separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    return 0;
}