#include <stdio.h>

int main (){
    
    //Nesse programa, vamos aprender como funciona o IF-ELSE, que é uma estrutura de decisão.
    //Ele nos permite executar um bloco de código se uma condição for verdadeira e outro bloco de código se a condição for falsa.
    
    //Sintaxe do IF-ELSE:
    /*if (condição) {
    // código a ser executado se a condição for verdadeira
    } else {
    // código a ser executado se a condição for falsa
    }*/

    //Exemplo prático:

    int numero1, numero2;

    numero1=19;
    numero2=20;

    if(numero1>numero2) {
        printf("O número 1 é maior que o número 2. \n");
    } else {
        printf("O número 2 é maior que o número 1. \n");
    }

return 0;

}