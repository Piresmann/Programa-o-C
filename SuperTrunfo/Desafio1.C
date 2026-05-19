#include <stdio.h>

int main (){

//Conjunto de Váriaveis para cadastro da Carta 1
   unsigned long int populacao1; // quantitativo de população da cidade
   int pontosturisticos1; //quantidade de pontos turísticos da cidade
    char estados1; //Uma letra de A - H
    char cod1[5]; //código da carta = Letra de A - H + Num de 01 - 04
    char cidade1[20]; //nome da cidade
    float area1; //área da cidade em km²
    float pib1; //pib da cidade
    float densidade1; //densidade populacional (população/área)
    float pibpercapita1; //pib per capita da cidade (pib/população)
    float superpoder1; // soma dos atributos da carta 1 para comparação com a carta 2

//Conjunto de Váriaveis para cadastro da Carta 2
    unsigned long int populacao2; // quantitativo de população da cidade
    int pontosturisticos2; //quantidade de pontos turísticos da cidade
    char estados2; //Uma letra de A - H
    char cod2[5]; //código da carta = Letra de A - H + Num de 01 - 04
    char cidade2[20]; //nome da cidade
    float area2; //área da cidade em km²
    float pib2; //pib da cidade
    float densidade2; //densidade populacional (população/área)
    float pibpercapita2; //pib per capita da cidade (pib/população)
    float superpoder2; // soma dos atributos da carta 2 para comparação com a carta 1


//Mensagem de boas-vindas ao usuário
    printf("Bem-Vindo ao cadastro das cartas SUPER TRUNFO - PAÍSES\n");
    printf("Siga atentamente as intruções a seguir para realizar o cadastro corretamente !\n");

/*Inicialização do Cadastro :
1 - Letra do Estado > A-H
2 - Código da Carta
3 - Nome da Cidade
4 - Número de Habitantes
5 - PIB da cidade
6 - Área da cidade em km2
7 - Número de Pontos Turísticos 
*/
    printf("Vamos começar !\n");

 // Sequencia de Cadastro das Informações   
  
    printf("Digite uma letra de A-H para o Estado: \n");
    scanf(" %c", &estados1);
    
    printf("Digite o código da carta utilizando a letra escolhida do Estado anterior + um número de 1-4. Ex:A02\n");
    scanf("%s",cod1);
  
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade1);
    
    printf("Digite o número de Habitantes: \n");
    scanf("%lu", &populacao1);
  
    printf("Digite o PIB de %s \n",cidade1);
    scanf("%f", &pib1);
   
    printf("Digite a área de %s em Km² \n", cidade1);
    scanf("%f", &area1);
    
    printf("Digite a quantidade de pontos Turísticos em %s \n", cidade1);
    scanf("%lu", &pontosturisticos1);

    // Depois de ler todos os dados da carta 1
        densidade1 = (float)populacao1 / area1; 
        pibpercapita1 = pib1 / (float)populacao1;
    // Cálculo do Super Poder da Carta 1
        superpoder1 = (float)populacao1 + (float)pontosturisticos1 + area1 + pib1 +  pibpercapita1 + (1.0f / densidade1);

            

// Finalização do Cadastro da Carta 1 e apresentação dos dados
    printf("Cadastro da Carta 1 realizado ! \n");
    printf("Carta1 \n");
    printf("Estado: %c \n", estados1);
    printf("Código: %s \n", cod1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %lu \n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f habitantes por km² \n", densidade1);
    printf("PIB per Capita: %.2f reais \n", pibpercapita1);
    
// Cadastro da Carta 2 mudando as variaveis 

    printf("Agora faremos o cadastro da Carta 2 !\n");

    printf("Digite uma letra de A-H para o Estado: \n");
    scanf(" %c", &estados2);
    
    printf("Digite o código da carta utilizando a letra escolhida do Estado anterior + um número de 1-4. Ex:A02\n");
    scanf(" %s",cod2);
  
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade2);
    
    printf("Digite o número de Habitantes: \n");
    scanf("%lu", &populacao2);
  
    printf("Digite o PIB de %s \n",cidade2);
    scanf("%f", &pib2);
   
    printf("Digite a área de %s em Km² \n", cidade2);
    scanf("%f", &area2);
    
    printf("Digite a quantidade de pontos Turísticos em %s \n", cidade2);
    scanf("%d", &pontosturisticos2);

      // Depois de ler todos os dados da carta 2
        densidade2 = (float)populacao2 / area2; 
        pibpercapita2 = pib2 / (float)populacao2;
    // Cálculo do Super Poder da Carta 2
        superpoder2 = (float)populacao2 + (float)pontosturisticos2 + area2 + pib2 +  pibpercapita2 + (1.0f / densidade2);

// Finalização do Cadastro da Carta 2 e apresentação dos dados

    printf("Cadastro da Carta 2 realizado ! \n");
    
    printf("Carta2 \n");
    printf("Estado: %c \n", estados2);
    printf("Código: %s \n", cod2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %lu \n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f habitantes por km² \n", densidade2);
    printf("PIB per Capita: %.2f reais \n", pibpercapita2);

 // Variaveis de Comparação entre as Cartas
    
    int comparacaopopulacao, comparacaopib, comparacaoarea, comparacaopontos, comparacaopibpercapita, comparacaosuperpoder, comparacaodensidade;

    comparacaopopulacao = (populacao1 > populacao2);
    comparacaopib = (pib1 > pib2);
    comparacaoarea = (area1 > area2);
    comparacaopontos = (pontosturisticos1 > pontosturisticos2);
    comparacaopibpercapita = (pibpercapita1 > pibpercapita2);
    comparacaosuperpoder = (superpoder1 > superpoder2);
    comparacaodensidade = (densidade1 < densidade2); // Para densidade populacional, a carta com menor valor é considerada melhor


//Exibição de Resultados da Comparação entre as Cartas

printf("Vamos comparar as cartas ! \n");
printf("População: Carta 1 venceu (%d)\n", comparacaopopulacao);
printf("Area: Carta 1 venceu (%d)\n", comparacaoarea);
printf("PIB: Carta 1 venceu (%d)\n", comparacaopib);
printf("Pontos Turísticos: Carta 1 venceu (%d)\n", comparacaopontos);
printf("Densidade Populacional: Carta 2 venceu (%d)\n", comparacaodensidade);
printf("PIB per Capita: Carta 1 venceu (%d)\n", comparacaopibpercapita);
printf("Super Poder: Carta 1 venceu (%d)\n", comparacaosuperpoder);

return 0;

}