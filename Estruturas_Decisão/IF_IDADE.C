#include <stdio.h>

int main (){
    //Se a idade for maior de 18 anos, o programa vai imprimir "Você é maior de idade".

    int idade;
    idade=15;

    if (idade>18) {    
        printf("Você é maior de idade.\n");
    } else {
        printf("Você é menor de idade.\n");
    }
    
    return 0;
}