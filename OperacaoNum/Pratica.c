#include <stdio.h>

int main (){

//Atribuição de duas variaveis numéricas para pratica com operadores e atribuição.

    int a = 10;
    int b = 5;

//Variaveis com Operadores Aritméticos

    int soma = a + b;
    int subtracao = a - b;
    int multiplicacao = a * b;
    int divisão = a / b;

//Operadores de Atribuição 
    a +=2; // *A* recebeu 2 então o novo valor é 7
    b *=3; // *B* foi multiplicado por 5 então o novo valor é 50 

//Operadores de Incremento e decremento 
    a++; // *A* recebeu incremento então o novo valor é 6
    b--; // *B* foi reduzido então o novo valor é 9

//Exibição de Resultados:

    printf("Soma: %d \n", soma);
    printf("Subtração: %d \n", subtracao);
    printf("Multiplicação: %d \n", multiplicacao);
    printf("Divisão: %d \n", divisão);
    printf("Novo valor de a (após += e ++) %d \n", a );
    printf("Novo valor de b (após *= e --) %d \n", b );

return 0;






}