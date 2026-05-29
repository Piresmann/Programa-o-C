#include <stdio.h>

int main (){

// Declaração de variáveis que utilizaermos no controle de estoque

char produtoA[30] = "Produto A";
char produtoB[30] = "Produto B";

unsigned int estoqueA = 1000;
unsigned int estoqueB = 2000;

float valorA = 10.50;
float valorB = 20.40;

unsigned int estoqueMinimoA = 500;
unsigned int estoqueMinimoB = 2500;

double valorTotalA;
double valorTotalB;

// Exibir as informações dos Produtos

printf ("Produto %s tem estoque %u e o valor unitario é %f", produtoA, estoqueA, valorA);

return 0;

}