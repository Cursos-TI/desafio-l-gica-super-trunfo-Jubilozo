#include <stdio.h>

// Nível Novato

int main() {
    // variáveis de cada cidade
    int n_pontos_t, populacao, n_pontos_t_2, populacao_2;
    float area, pib, area_2, pib_2;
    char nome[50], estado[50], codigo[50], nome_2[50], estado_2[50], codigo_2[50];
    float pib_per_capita, pib_per_capita_2, densidade_p, densidade_p_2;

    // Introdução
    printf("Vamos criar duas cartas baseadas em informações de cidades brasileiras!\n");

    // Coleta de dados - Carta 1
    printf("\n--- Primeira cidade ---\n");

    printf("Informe a sigla do estado (ex: SP, RJ, MG): ");
    scanf("%s", &estado);

    printf("Crie um código para a cidade (use números junto da sigla): ");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome);

    printf("Informe a população total da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área territorial (em km²): ");
    scanf("%f", &area);

    printf("Agora, informe o PIB bruto (em milhões): ");
    scanf("%f", &pib);

    printf("Quantos pontos turísticos a cidade possui? ");
    scanf("%d", &n_pontos_t);

    // Coleta de dados - Carta 2
    printf("\n--- Segunda cidade ---\n");

    printf("Digite a sigla do estado: ");
    scanf("%s", &estado_2);

    printf("Crie um código identificador: ");
    scanf("%s", &codigo_2);

    printf("Nome da cidade: ");
    scanf("%s", &nome_2);

    printf("População total: ");
    scanf("%d", &populacao_2);

    printf("Área territorial (em km²): ");
    scanf("%f", &area_2);

    printf("Informe o PIB bruto (em milhões): ");
    scanf("%f", &pib_2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &n_pontos_t_2);

    // Cálculos
    pib_per_capita = pib / populacao;
    densidade_p = populacao / area;
    pib_per_capita_2 = pib_2 / populacao_2;
    densidade_p_2 = populacao_2 / area_2;

    // Exibição dos dados - Carta 1
    printf("\n=== Dados da primeira cidade ===\n");
    printf("Estado: %s\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: R$ %.2f milhões\nPontos turísticos: %d\n",
           estado, codigo, nome, populacao, area, pib, n_pontos_t);
    printf("PIB per capita: R$ %.2f\nDensidade populacional: %.2f hab/km²\n", pib_per_capita, densidade_p);

    // Exibição dos dados - Carta 2
    printf("\n=== Dados da segunda cidade ===\n");
    printf("Estado: %s\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: R$ %.2f milhões\nPontos turísticos: %d\n",
           estado_2, codigo_2, nome_2, populacao_2, area_2, pib_2, n_pontos_t_2);
    printf("PIB per capita: R$ %.2f\nDensidade populacional: %.2f hab/km²\n", pib_per_capita_2, densidade_p_2);

    // Comparação entre as cidades
    printf("\n=== Comparação baseada na população ===\n");
    if (populacao > populacao_2) {
        printf("A primeira cidade tem uma população maior!\n");
        printf("População da cidade 1: %d\nPopulação da cidade 2: %d\n", populacao, populacao_2);
    } else if (populacao == populacao_2) {
        printf("As duas cidades possuem a mesma população!\n");
        printf("População: %d habitantes\n", populacao);
    } else {
        printf("A segunda cidade tem uma população maior!\n");
        printf("População da cidade 1: %d\nPopulação da cidade 2: %d\n", populacao, populacao_2);
    }

    return 0;
}
