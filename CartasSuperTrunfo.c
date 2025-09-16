#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
          
                  //Mensagem inial
        printf("Bem vindo ao Super Trunfo!\n");

  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado [20];
    char código [20];
    char cidade [15];
    float população;
    float km²;  
    int PontosTuristicos;

  // Área para entrada de dados
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
              
      // Área para exibição dos dados da cidade
        printf("Estado: %s - Cidade: %s - Código: %s \n", estado, cidade, código);
        printf("Populção: %f \n", população);
        printf("Km²: %f \n", km²);
        printf("Pontos Turisticos: %d \n", PontosTuristicos);

        return 0;
} 
