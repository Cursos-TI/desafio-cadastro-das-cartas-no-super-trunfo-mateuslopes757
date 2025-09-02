#include <stdio.h>

int main(){
    char estado_carta01;
    char codigo_carta01[10];
    char nome_cidade01[100];
    int populacao_cidade01;
    float area_cidade01;
    float pib_cidade01;
    int pontos_turisticos_cidade01;

    
    char estado_carta02;
    char codigo_carta02[10];
    char nome_cidade02[100];
    int populacao_cidade02;
    float area_cidade02;
    float pib_cidade02;
    int pontos_turisticos_cidade02;

   
    printf("Preencha os dados da carta 01\n");
    printf("Digite o Estado (Uma letra de A a H): ");
    scanf(" %c", &estado_carta01); 

    printf("Digite o Código da Carta: ");
    scanf("%s", codigo_carta01);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade01);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao_cidade01);

    printf("Digite a área da cidade: ");
    scanf("%f", &area_cidade01);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib_cidade01);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos_cidade01);

    printf("\n");

  
    printf("Preencha os dados da carta 02\n");
    printf("Digite o Estado (Uma letra de A a H): ");
    scanf(" %c", &estado_carta02);

    printf("Digite o Código da Carta: ");
    scanf("%s", codigo_carta02);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade02);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao_cidade02);

    printf("Digite a área da cidade: ");
    scanf("%f", &area_cidade02);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib_cidade02);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos_cidade02);

    printf("\n");

   
    float densidade01 = populacao_cidade01 / area_cidade01;
    float pib_per_capita01 = pib_cidade01 / populacao_cidade01;

    float densidade02 = populacao_cidade02 / area_cidade02;
    float pib_per_capita02 = pib_cidade02 / populacao_cidade02;


    printf("CARTA 01\n");
    printf("Estado: %c\n", estado_carta01);
    printf("Código da Carta: %s\n", codigo_carta01);
    printf("Nome da Cidade: %s\n", nome_cidade01);
    printf("População: %d\n", populacao_cidade01);
    printf("Área (em km²): %.2f km²\n", area_cidade01);
    printf("PIB: %.2f Bilhões de reais\n", pib_cidade01);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_cidade01);
    printf("Densidade populacional: %.2f hab/km²\n", densidade01);
    printf("PIB per capita: %.6f bilhões/hab\n", pib_per_capita01);

    printf("\n");

    printf("CARTA 02\n");
    printf("Estado: %c\n", estado_carta02);
    printf("Código da Carta: %s\n", codigo_carta02);
    printf("Nome da Cidade: %s\n", nome_cidade02);
    printf("População: %d\n", populacao_cidade02);
    printf("Área (em km²): %.2f km²\n", area_cidade02);
    printf("PIB: %.2f Bilhões de reais\n", pib_cidade02);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_cidade02);
    printf("Densidade populacional: %.2f hab/km²\n", densidade02);
    printf("PIB per capita: %.6f bilhões/hab\n", pib_per_capita02);

    return 0;
}
