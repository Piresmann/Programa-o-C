#include <stdio.h>

int main (){

//Vamos trabalhar com a conversão de Dados !

int a = 10;
float b = 3.5;

/*Criamos duas variaveis, uma com valor inteiro e outra com decimal (ponto flutuante).
Utilizarei a conversão implicita para manipular esses dados convertendo "A" para float
*/

float resultado = a + b;
printf("Resultado: %.1f \n", resultado);

return 0;

}