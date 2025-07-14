#include <stdio.h>

int main() {
    
    int populacao1, turisticos1, populacao2, turisticos2;
    
    float pib1, area1, pib2, area2;
    
    char estado1[50], sigla1[50], cidade1[50], estado2[50], sigla2[50], cidade2[50];

     printf("Digite o Primeiro Estado: \n");
    scanf("%s", estado1);
    
    printf("Digite a Sigla do Estado 1: \n");
    scanf("%s", sigla1);

    printf("Digite o Nome da Cidade 1: \n");
    scanf("%s", cidade1);

    printf("Digite a População da Cidade 1: \n");
    scanf("%d", &populacao1);
    
    printf("Digite a quantidade de Pontos Turisticos da Cidade 1: \n");
    scanf("%d", &turisticos1);

    printf("Digite o PIB da cidade 1: \n");
    scanf("%f", &pib1);

    printf("Digite o tamanho da Area da cidade 1 \n" );
    scanf("%f", &area1);

    printf("O Estado 1 é: %s a sigla do Estado é: %s o nome da Cidade é: %s o número da População é: %d nesta cidade tem: %d Pontos Turisticos a PIB é: %f e o tamanho é %f \n", estado1, sigla1, cidade1, populacao1, turisticos1, pib1, area1);


    printf("Digite o Segundo Estado: \n");
    scanf("%s", estado2);
    
    printf("Digite a Sigla do Estado 2: \n");
    scanf("%s", sigla2);

    printf("Digite o Nome da Cidade 2: \n");
    scanf("%s", cidade2);

    printf("Digite a População da Cidade 2: \n");
    scanf("%d", &populacao2);
    
    printf("Digite a quantidade de Pontos Turisticos da Cidade 2: \n");
    scanf("%d", &turisticos2);

    printf("Digite o PIB da cidade 2: \n");
    scanf("%f", &pib2);

    printf("Digite o tamanho da Area da cidade 2 \n");
    scanf("%f", &area2);

    
    printf("O Estado 2 é: %s a sigla do Estado é: %s o nome da Cidade é: %s o número da População é: %d nesta cidade tem: %d Pontos Turisticos a PIB é: %f e o tamanho é %f", estado2, sigla2, cidade2, populacao2, turisticos2, pib2, area2);
   
    return 0;
}
