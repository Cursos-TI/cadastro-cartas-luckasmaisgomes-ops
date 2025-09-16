#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
          
                  //Mensagem inial
        printf("Bem vindo ao Super Trunfo!\n");

// Área para definição das variáveis para armazenar as propriedades das cidades 1

        //Cidade 1
    char estado [20];
    char código [20];
    char cidade [15];
    float população;
    float km²;  
    int PontosTuristicos;

// Área para entrada de dados cidade 1
        printf("Digite o nome do estado: \n");
        scanf("%s", &estado);

        printf("Digite o código: \n");
        scanf("%s", &código);

        printf("Digite o nome da cidade: \n");
        scanf("%s", &cidade);

        printf("Digite a população: \n");
        scanf("%f", &população);

        printf("Digite o km²: \n");
        scanf("%f", &km²);

        printf("Digite Pontos Turistico: \n");
        scanf("%d", &PontosTuristicos);
              
// Área para exibição dos dados da cidade 1
        printf("Estado: %s - Cidade: %s - Código: %s \n", estado, cidade, código);
        printf("Populção: %f \n", população);
        printf("Km²: %f \n", km²);
        printf("Pontos Turisticos: %d \n", PontosTuristicos);

// Área para definição das variáveis para armazenar as propriedades das cidades 2        
    
        //Cidade 2
    char estado2 [20];
    char código2 [20];
    char cidade2 [15];
    float população2;
    float km²2;  
    int PontosTuristicos2;

// Área para entrada de dados cidade 2
        printf("Digite o nome do estado: \n");
        scanf("%s", &estado2);

        printf("Digite o código: \n");
        scanf("%s", &código2);

        printf("Digite o nome da cidade: \n");
        scanf("%s", &cidade2);

        printf("Digite a população: \n");
        scanf("%f", &população2);

        printf("Digite o km²: \n");
        scanf("%f", &km²2);

        printf("Digite Pontos Turistico: \n");
        scanf("%d", &PontosTuristicos2);
              
// Área para exibição dos dados da cidade 2
        printf("Estado: %s - Cidade: %s - Código: %s \n", estado2, cidade2, código2);
        printf("Populção: %f \n", população2);
        printf("Km²: %f \n", km²2);
        printf("Pontos Turisticos: %d \n", PontosTuristicos2);

        return 0;
} 
