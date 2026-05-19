#include <stdio.h>

    int main(){

        //tipo e nome das variaveis 
            int idade = 26;
            int quantidade = 1;
            float altura = 1.89;
            double peso = 90.8;
            char nome[20] = "Pedro Henrich";
            char letra = 'P';
            char opção = 'S';

        printf ("A idade do %s é:%d anos \n",nome,idade);
        printf ("Atualmente ele pesa %.3fKg \n",peso);
        printf ("Sua medida é de %.2fcm \n",altura);
        printf ("Sua opção foi:%c",opção);



    /*  %d: Imprime um inteiro no formato decimal.
 
        %i: Equivalente a %d.
 
        %f: Imprime um número de ponto flutuante no formato padrão.
 
        %e: Imprime um número de ponto flutuante na notação científica.
 
        %c: Imprime um único caractere.
 
        %s: Imprime uma cadeia (string) de caracteres.
    */


    }