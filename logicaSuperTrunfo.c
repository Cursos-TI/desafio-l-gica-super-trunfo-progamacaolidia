#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estado1[20];
    char codigo1[20];
    char cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float densidade1;
    float pibpercapita1;
    float superpoder1;


    char estado2[20];
    char codigo2[20];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidade2;
    float pibpercapita2;
    float superpoder2;

    printf("\n");
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
    printf("Digite dados da primeira carta:\n");

    printf("Digite o Estado da carta(de A a H): \n");
    scanf("%s",&estado1);

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo1);

    printf("Digite a cidade da carta: \n");
    scanf("%s", cidade1);

    printf("Digite a populaçao da carta: \n");
    scanf("%d", &populacao1);

    printf("Digite a area da carta: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da carta: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos da carta: \n");
    scanf("%d", &pontosturisticos1);

    densidade1 = populacao1/area1;

    pibpercapita1 = pib1/populacao1;

    superpoder1 = (float)populacao1+area1+pib1+(float)pontosturisticos1+pibpercapita1+(1.0/densidade1);
    printf("Densidade Populacional: %.2f \n", densidade1);
    printf("PIB per Capita: %.2f\n", pibpercapita1);
    printf("Superpoder: %.2f\n",superpoder1);


    printf("\n");
    printf("Digite dados da segunda carta:\n");

    printf("Digite o Estado da carta: \n");
    scanf("%s", estado2);

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo2);

    printf("Digite a cidade da carta: \n");
    scanf("%s", cidade2);

    printf("Digite a populaçao da carta: \n");
    scanf("%d", &populacao2);

    printf("Digite a area da carta: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da carta: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos da carta: \n");
    scanf("%d", &pontosturisticos2);

    densidade2 = populacao2/area2;

    pibpercapita2 = pib2/populacao2;

    superpoder2 = (float)populacao2+area2+pib2+(float)pontosturisticos2+pibpercapita2+(1.0/densidade2);
    printf("Densidade Populacional: %.2f \n", densidade2);
    printf("PIB per Capita: %.2f\n", pibpercapita2);
    printf("Superpoder: %.2f\n",superpoder2);

    printf("\n");

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }
    printf("Comparação entre as cartas(Atributo área):\n");
    printf("Carta 1 - %s: %.2f\n", cidade1, area1);
    printf("Carta 2 - %s: %.2f\n", cidade2, area2);
      if (area1 > area2) {
          printf("Carta 1 - Fortaleza vence no atributo área!\n");
      } else if (area1 < area2) {
          printf("Carta 2 - Salvador vence no atributo área!\n");
      }

    
    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    
    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
    }
