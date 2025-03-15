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

int main(){

    //Variaveis carta 1
    char Estado[50];
    char cidade[15];
    int Populacao;
    float area;
    int pturisticos;
    float pib;
    char codigo[04];
  

    //Variaveis carta 2
    char Estado2[50];
    char cidade2[15];
    int Populacao2;
    float area2;
    int Pturisticos2;
    float pib2;
    char codigo2[05];
 

    //Leitura da carta 1
    printf("Estado:");
    scanf("%s", Estado);

    printf("Cidade:");
    scanf("%s", cidade);

    printf("População:");
    scanf("%d", &Populacao);

    printf("Area:");
    scanf("%f", &area);
 
    printf("Ponto Turistico:");
    scanf("%d", &pturisticos);

    printf("PIB:");
    scanf("%f", &pib);

    
    printf("Codigo da Carta:");
    scanf("%s", codigo);
   
    // Cálculo da densidade populacional e PIB per capita para a carta 1
    float densidadePopulacional = Populacao / area;
    float pibPerCapita = pib / Populacao; 

    // Cálculo da densidade populacional e PIB per capita para a carta 2
    float densidadePopulacional2 = Populacao2/ area2;
    float pibPerCapita2 = pib2 / Populacao2; 


    //Exibição carta 1
    printf("Estado: %s \n", Estado);
    printf("Cidade: %s \n", cidade);
    printf("População: %d \n", Populacao);
    printf("Area: %.2f \n", area);
    printf("Ponto Turistico: %d \n", pturisticos);
    printf("PIB: %.2f \n", pib);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita);
    printf("Código %s \n", codigo);
    

    //Leitura da carta 2
    printf("Estado2:");
    scanf("%s", Estado2);

    printf("Cidade2:");
    scanf("%s", cidade2);

    printf("Populacao2:\n");
    scanf("%d", &Populacao2);

    printf("Area2:");
    scanf("%f", &area2);

    printf("Ponto Turistico2:");
    scanf("%d", &Pturisticos2);

    printf("PIB2:");
    scanf("%f", &pib2);

    printf("codigo da carta2:");
    scanf("%s", codigo2);
 

    //Exibição carta 2
    printf("Estado: %s \n", Estado2);
    printf("Cidade: %s \n", cidade2);
    printf("Populacao: %d \n", Populacao2);
    printf("Area: %.2f \n", area2);
    printf("Ponto Turistico: %d \n", Pturisticos2);
    printf("PIB: %.2f \n", pib2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("codigo %s \n", codigo2);

    return 0;
}
