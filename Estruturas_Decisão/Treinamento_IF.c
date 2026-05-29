#include <stdio.h>  

int main() {
    
/*Nesse programa, vamos aprender como funciona o IF, que é uma estrutura de decisão. 
    Ele nos permite executar um bloco de código apenas se uma condição for verdadeira.*/

    //Sintaxe do IF:
    /*if (condição) {
    // código a ser executado se a condição for verdadeira
     }*/

//Exemplo prático:
    
    int numero1, numero2;

    numero1 = 19;
    numero2 = 20;

    if (numero1>numero2) {
        printf("O número 1 é maior que o número 2.\n");
    }

    return 0;

}