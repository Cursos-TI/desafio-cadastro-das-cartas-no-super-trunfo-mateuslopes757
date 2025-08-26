#include <stdio.h>

int main() {
    char estado_carta01;
    char codigo_carta01[10];
    char nome_cidade01[100];
    int populacao_cidade01;
    float area_cidade01;
    float pib_cidade01;
    int numeros_pontos_turisticos_cidade01;

    char estado_carta02;
    char codigo_carta02[10];
    char nome_cidade02[100];
    int populacao_cidade02;
    float area_cidade02;
    float pib_cidade02;
    int numeros_pontos_turisticos_cidade02;

    
    printf("Preencha os dados da carta 01\n");
    printf("Digite o Estado (Uma letra de A a H - Representando um estado): ");
    scanf(" %c", &estado_carta01); 
    printf("Digite o Código da Carta (Primeira letra do Estado adicionando 01 a 04): ");
    scanf("%s", codigo_carta01);
    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade01);
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao_cidade01);
    printf("Digite a área da cidade: ");
    scanf("%f", &area_cidade01);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib_cidade01);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &numeros_pontos_turisticos_cidade01);

    printf("\n");

   
    printf("Preencha os dados da carta 02\n");
    printf("Digite o Estado (Uma letra de A a H - Representando um estado): ");
    scanf(" %c", &estado_carta02);
    printf("Digite o Código da Carta (Primeira letra do Estado adicionando 01 a 04): ");
    scanf("%s", codigo_carta02);
    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade02);
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao_cidade02);
    printf("Digite a área da cidade: ");
    scanf("%f", &area_cidade02);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib_cidade02);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &numeros_pontos_turisticos_cidade02);

    printf("\n");

    
    printf("CARTA 01\n");
    printf("Estado: %c\n", estado_carta01);
    printf("Código da Carta: %s\n", codigo_carta01);
    printf("Nome da Cidade: %s\n", nome_cidade01);
    printf("População: %d\n", populacao_cidade01);
    printf("Área (em km²): %.2f km²\n", area_cidade01);
    printf("PIB: %.2f Bilhões de reais\n", pib_cidade01);
    printf("Número de Pontos Turísticos: %d\n", numeros_pontos_turisticos_cidade01);

    printf("\n");

    printf("CARTA 02\n");
    printf("Estado: %c\n", estado_carta02);
    printf("Código da Carta: %s\n", codigo_carta02);
    printf("Nome da Cidade: %s\n", nome_cidade02);
    printf("População: %d\n", populacao_cidade02);
    printf("Área (em km²): %.2f km²\n", area_cidade02);
    printf("PIB: %.2f Bilhões de reais\n", pib_cidade02);
    printf("Número de Pontos Turísticos: %d\n", numeros_pontos_turisticos_cidade02);

    return 0;
}