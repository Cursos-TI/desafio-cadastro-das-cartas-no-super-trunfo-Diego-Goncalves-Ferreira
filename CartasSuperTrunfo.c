#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Desafio Cartas Super Trunfo /n");

    //Variáveis da primeira carta
    char estado_1[50], codigo_da_carta_1[50], nome_cidade_1[50];
    int populacao_1, n_pontos_turisticos_1;
    float area_1, PIB_1;

    printf("Carta 1: \n");

    printf("Digite um Estado (escolha uma letra entre 'A' e 'H'): \n");
    scanf("%s", estado_1);

    printf("Digite o código da carta (ex: A01, B03): \n");
    scanf("%s", codigo_da_carta_1);

    printf("Digite o nome da cidade: \n");
    getchar();
    fgets(nome_cidade_1, 50, stdin);

    printf("Digite a população: \n");
    scanf("%d", &populacao_1);

    printf("Digite a área do município: \n");
    scanf("%f", &area_1);

    printf("Digite o PIB do município: \n");
    scanf("%f", &PIB_1);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &n_pontos_turisticos_1);

    //Exibição das informações da carta 1
    printf("Carta 1: \n");
    printf("Estado: %s \n", estado_1);
    printf("Código: %s \n", codigo_da_carta_1);
    printf("Cidade: %s", nome_cidade_1);
    printf("População: %d \n", populacao_1);
    printf("Área: %.2f \n", area_1);
    printf("PIB: %.2f \n", PIB_1);
    printf("Número de pontos turísticos do município: %d \n", n_pontos_turisticos_1);

    printf("------------------------------------------------------------------------- \n");
    
    //Variáveis da segunda carta
    char estado_2[50], codigo_da_carta_2[50], nome_cidade_2[50];
    int populacao_2, n_pontos_turisticos_2;
    float area_2, PIB_2;

    printf("Carta 2: \n");

    printf("Digite um Estado (escolha uma letra entre 'A' e 'H'): \n");
    scanf("%s", estado_2);

    printf("Digite o código da carta (ex: A01, B03): \n");
    scanf("%s", codigo_da_carta_2);

    printf("Digite o nome da cidade: \n");
    getchar();
    fgets(nome_cidade_2, 50, stdin);

    printf("Digite a população: \n");
    scanf("%d", &populacao_2);

    printf("Digite a área do município: \n");
    scanf("%f", &area_2);

    printf("Digite o PIB do município: \n");
    scanf("%f", &PIB_2);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &n_pontos_turisticos_2);

    //Exibição das informações da carta 2
    printf("Carta 2: \n");
    printf("Estado: %s \n", estado_2);
    printf("Código: %s \n", codigo_da_carta_2);
    printf("Cidade: %s", nome_cidade_2);
    printf("População: %d \n", populacao_2);
    printf("Área: %.2f \n", area_2);
    printf("PIB: %.2f \n", PIB_2);
    printf("Número de pontos turísticos do município: %d \n", n_pontos_turisticos_2);

    return 0;
}
