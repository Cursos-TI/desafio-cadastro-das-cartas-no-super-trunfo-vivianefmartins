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


    int codCidade;
    char nomeCidade[50];
    float populacao;
    float area;
    float pib;
    int pontosTuristicos;

    printf("Digite o código da cidade: \n");
    scanf("%d", &codCidade);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomeCidade);

    printf("Digite a população estimada desta cidade: \n");
    scanf("%f", &populacao);

    printf("Digite a área territorial desta cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB desta cidade: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos que esta cidade possui: \n");
    scanf("%d", &pontosTuristicos);

    printf("Código da carta: %d\n", codCidade);
    printf("Nome da cidade: %s\n", nomeCidade);
    printf("População: %f\n", populacao);
    printf("Área territorial: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Quantidade de pontos turísticos: %d", pontosTuristicos);

    return 0;
}
