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

    return 0;
}

#include <stdio.h>

int main() {
    // Variáveis carta 1
    char Estado[50];
    char cidade[15];
    unsigned long int Populacao;
    float area;
    int pturisticos;
    float pib;
    char codigo[5];

    // Variáveis carta 2
    char Estado2[50];
    char cidade2[15];
    unsigned long int Populacao2;
    float area2;
    int Pturisticos2;
    float pib2;
    char codigo2[5];


    // Leitura da carta 1
    printf("--- Carta 1 ---\n");
    printf("Estado: ");
    scanf("%s", Estado);
    printf("Cidade: ");
    scanf("%s", cidade);
    printf("População: ");
    scanf("%lu", &Populacao);
    printf("Área: ");
    scanf("%f", &area);
    printf("Ponto Turístico: ");
    scanf("%d", &pturisticos);
    printf("PIB: ");
    scanf("%f", &pib);
    printf("Código da Carta: ");
    scanf("%s", codigo);

    // Cálculo da densidade populacional e PIB per capita para a carta 1
    float densidadePopulacional = Populacao / area;
    float pibPerCapita = (Populacao > 0) ? (pib / Populacao) : 0;
    float superPoder1 = (float)(Populacao + area + pturisticos + pib + pibPerCapita - densidadePopulacional);

    // Exibição carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s \n", Estado);
    printf("Cidade: %s \n", cidade);
    printf("População: %lu \n", Populacao);
    printf("Área: %.2f \n", area);
    printf("Ponto Turístico: %d \n", pturisticos);
    printf("PIB: %.2f \n", pib);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita);
    printf("Código: %s \n", codigo);
   

    // Leitura da carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: ");
    scanf("%s", Estado2);
    printf("Cidade: ");
    scanf("%s", cidade2);
    printf("População: ");
    scanf("%lu", &Populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("Ponto Turístico: ");
    scanf("%d", &Pturisticos2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Código da Carta: ");
    scanf("%s", codigo2);

    // Cálculo da densidade populacional e PIB per capita para a carta 2
    float densidadePopulacional2 = Populacao2 / area2;
    float pibPerCapita2 = (Populacao2 > 0) ? (pib2 / Populacao2) : 0;
    float superPoder2 = (float)(Populacao2 + area2 + Pturisticos2 + pib2 + pibPerCapita2 - densidadePopulacional2);

    // Exibição carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s \n", Estado2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %lu \n", Populacao2);
    printf("Área: %.2f \n", area2);
    printf("Ponto Turístico: %d \n", Pturisticos2);
    printf("PIB: %.2f \n", pib2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per  Capita: %.2f reais\n", pibPerCapita2);
    printf("Código: %s \n", codigo2);
    

    //Resultado da carta vencedora
    printf("\n--- Carta vencedora ---\n");

    if (superPoder1 > superPoder2)
    {
        printf("Carta 1 venceu! \n");
    }else
    {
        printf("Carta 2 venceu! \n");
    }
   

    return 0;

}
