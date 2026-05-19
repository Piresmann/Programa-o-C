#include <stdio.h>

int main (){

    /* Operadores Aritméticos

    Soma (+)
    Substração (-)
    Multiplicação (*)
    Divisão (/)

    */

int numero1 , numero2;

//Variaveis de Resultados

int soma, substracao, multiplicacao, divisao;

printf("Digite o numero 1 \n");
scanf("%d", &numero1);
printf("Digite o número 2 \n");
scanf("%d", &numero2);

//Operações 

soma = numero1 + numero2;
substracao = numero1 - numero2;
multiplicacao = numero1 * numero2;
divisao = numero1 / numero1;


printf("A soma é: %d\n", soma);
printf("A subtração é: %d\n", substracao);
printf("A multiplicação é: %d\n", multiplicacao);
printf("A divisão é: %d\n", divisao);

return 0;




}