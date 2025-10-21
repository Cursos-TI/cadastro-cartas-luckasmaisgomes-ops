#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
          
//Mensagem inicial
        printf("Bem vindo ao Super Trunfo!\n");

// Área para definição das variáveis para armazenar as propriedades das cidades 1

        //Cidade 1
    char estado1 [20];
    char código1 [20];
    char cidade1 [15];
    float população1;
    float Area1; 
    float PIB1; 
    int PontosTuristicos1;
    float Densidade1;
    float PIBperCapita1;
    float mediaD1;
    float mediaP1;
    float SuperPoder1;


// Área para definição das variáveis para armazenar as propriedades das cidades 2        
    
        //Cidade 2
    char estado2 [20];
    char código2 [20];
    char cidade2 [15];
    float população2;
    float Area2;  
    float PIB2;
    int PontosTuristicos2;
    float Densidade2;
    float PIBperCapita2;
    float mediaD2;
    float mediaP2;
    float SuperPoder2;
    float resultadoA, resultadoB;

// Área para entrada de dados cidade 1
        printf("Digite o nome do estado n°1: \n");
        scanf("%s", &estado1);

        printf("Digite o código n°1: \n");
        scanf("%s", &código1);

        printf("Digite o nome da cidade n°1: \n");
        scanf("%s", &cidade1);

        printf("Digite a população n°1: \n");
        scanf("%f", &população1);

        printf("Digite o km² n°1: \n");
        scanf("%f", &Area1);

        printf("Digite o PIB da carta 1: \n");
        scanf("%f", &PIB1);

        printf("Digite Pontos Turistico n°1: \n");
        scanf("%d", &PontosTuristicos1);
    
    mediaD1 = (float)(população1 / Area1) /2;
    mediaP1 = (float)(PIB1 / população1) /2;

    SuperPoder1 = (float)(população1 + Area1 + PIB1 + PIBperCapita1 + Densidade1 / PontosTuristicos1);
    
// Área para entrada de dados cidade 2
        printf("Digite o nome do estado n°2: \n");
        scanf("%s", &estado2);

        printf("Digite o código n°2: \n");
        scanf("%s", &código2);

        printf("Digite o nome da cidade n°2: \n");
        scanf("%s", &cidade2);

        printf("Digite a população n°2: \n");
        scanf("%f", &população2);

        printf("Digite o km² n°2: \n");
        scanf("%f", &Area2);

        printf("Digite o PIB da carta 2: \n");
        scanf("%f", &PIB2);

        printf("Digite Pontos Turistico n°2: \n");
        scanf("%d", &PontosTuristicos2);
    
    mediaD2 = (float)(população2 / Area2) /2;
    mediaP2 = (float)(PIB2 / população2) /2;

    SuperPoder2 = (float)(população2 + Area2 + PIB2 + PIBperCapita2 + Densidade2 / PontosTuristicos2);

// Área para exibição dos dados da cidade 1
        printf("Estado 1: %s - Cidade: %s - Código: %s \n", estado1, cidade1, código1);
        printf("Populção: %.3f - Área: %.3f \n", população1, Area1);
        printf("PIB: %.f bilhões de reais \n", PIB1);
        printf("Pontos Turisticos: %d \n", PontosTuristicos1);
        printf("Densidade Populacional: %.3f hab/km² \n", mediaD1);
        printf("PIB per capita: %.3f reais \n", mediaP1);
        printf("Super Poder total é: %.3f \n", SuperPoder1);
        
        printf("\n");

// Área para exibição dos dados da cidade 2
        printf("Estado 2: %s - Cidade: %s - Código: %s \n", estado2, cidade2, código2);
        printf("Populção: %.3f - Área: %.3f \n", população2, Area2);
        printf("PIB: %.f bilhões de reais \n", PIB2);
        printf("Pontos Turisticos: %d \n", PontosTuristicos2);
        printf("Densidade Populacional: %.3f hab/km² \n", mediaD2);
        printf("PIB per capita: %.3f reais \n", mediaP2);
        printf("Super Poder total é: %.3f \n", SuperPoder2);

        printf("\n");

// Soma de Super poder!

        resultadoA = 1; // se sim
        resultadoB = 0; // se não

        printf("A carta 1 vale: %.3f e a carta 2 vale: %.3f\n", SuperPoder1 , SuperPoder2);

        printf("A carta mais forte é a 1: %d \n",SuperPoder1 >= SuperPoder2 );
        printf("A carta mais forte é a 2: %d \n",SuperPoder1 <= SuperPoder2);
          
        return 0;
    
} 
