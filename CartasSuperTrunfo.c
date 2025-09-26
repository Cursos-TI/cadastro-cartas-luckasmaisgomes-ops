#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
          
                  //Mensagem inial
        printf("Bem vindo ao Super Trunfo!\n");

// Área para definição das variáveis para armazenar as propriedades das cidades 1

        //Cidade 1
    char estado1 [20];
    char código1 [20];
    char cidade1 [15];
    float população1;
    float km²1;  
    int PontosTuristicos1;

    // Área para definição das variáveis para armazenar as propriedades das cidades 2        
    
        //Cidade 2
    char estado2 [20];
    char código2 [20];
    char cidade2 [15];
    float população2;
    float km²2;  
    int PontosTuristicos2;

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
        scanf("%f", &km²1);

        printf("Digite Pontos Turistico n°1: \n");
        scanf("%d", &PontosTuristicos1);
              
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
        scanf("%f", &km²2);

        printf("Digite Pontos Turistico n°2: \n");
        scanf("%d", &PontosTuristicos2);

// Área para exibição dos dados da cidade 1
        printf("Estado 1: %s - Cidade: %s - Código: %s \n", estado1, cidade1, código1);
        printf("Populção: %f \n", população1);
        printf("Km²: %f \n", km²1);
        printf("Pontos Turisticos: %d \n", PontosTuristicos1);

// Área para exibição dos dados da cidade 2
        printf("Estado 2: %s - Cidade: %s - Código: %s \n", estado2, cidade2, código2);
        printf("Populção: %f \n", população2);
        printf("Km²: %f \n", km²2);
        printf("Pontos Turisticos: %d \n", PontosTuristicos2);

        return 0;
} 
