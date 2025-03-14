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

 // Desafio Super Trunfo - Países
  // Tema 1 - Cadastro das Cartas

int main(){

    //Variaveis carta 1
    int pturisticos;
    int População;
    char Estado;
    char codigo[04];
    char cidade[15];
    float area;
    float pib;
 


    //Variaveis carta 2
    int Pturisticos2;
    int População2;
    char Estado2;
    char codigo2[05];
    char cidade2[15];
    float area2;
    float pib2;



    //Leitura da carta 1
    printf("Estado:\n");
    scanf("%c", &Estado);

    printf("Cidade:\n");
    scanf("%c", &cidade);

    printf("População:\n");
    scanf("%d", &População);

    printf("Area:\n");
    scanf("%f", &area);

    printf("Ponto Turistico:\n");
    scanf("%d", &pturisticos);

    printf("PIB:\n");
    scanf("%f", &pib);
    
    printf("Código da Carta:\n");
    scanf("%c", &codigo);
   
    //Exibição carta 1
    printf("Código %c \n", &codigo);
    printf("Cidade: %s\n", &cidade);
    printf("Estado: %c \n", &Estado);
    printf("Ponto Turistico: %d \n", &pturisticos);
    printf("Area: %f \n", &area);
    printf("População: %d \n", &População);
    printf("PIB: %f \n", &pib);
    
 
    
    //Leitura da carta 2
    printf("Estado2:\n");
    scanf("%c", &Estado2);

    printf("Cidade2:\n");
    scanf("%c", &cidade2);

    printf("População2:\n");
    scanf("%d", &População2);

    printf("Area2:\n");
    scanf("%f", &area2);

    printf("Ponto Turistico2:\n");
    scanf("%d", &Pturisticos2);

    printf("PIB2:\n");
    scanf("%f", &pib2);

    printf("código da carta2:\n");
    scanf("%c", &codigo2);
 

    //Exibição carta 2
    printf("codigo %c \n", &codigo2);
    printf("Cidade: %s\n", &cidade2);
    printf("Estado: %c \n", &Estado2);
    printf("Ponto Turistico: %d \n", &Pturisticos2);
    printf("Area: %f \n", &area2);
    printf("População: %d \n", &População2);
    printf("PIB: %f \n", &pib2);

    return 0;
}
