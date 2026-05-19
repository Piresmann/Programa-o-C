#include <stdio.h>

int main (){

    /* Operadores de Atribuição - Atribuem Valores a Variaveis combinados com os Artiméticos:

    Atribuição Simples (=)
    Atribuicão com soma (+=)
    Atribuição com subtração (-=)
    Atribuição com multiplicação (*=)
    Atribuição com Divisão (/=)
 
 */

int numero1=10, numero2=5, numero3=2, resultado = 10;

printf("Resultado: %d \n", resultado);

//O resultado dessa operação é : "resultado" + 20
resultado +=20;
printf("Resultado: %d \n", resultado);

//O resultado dessa operação é : "resultado" - numero1(10)
resultado -= numero1;
printf("Resultado: %d \n", resultado);

//O resultado dessa operação é : "resultado" * numero2(5)
resultado *=numero2;
printf("Resultado: %d \n", resultado);

//O resultado dessa operação é : "resultado" / numero3(2)
resultado /=numero3;
printf("Resultado: %d \n", resultado);




}