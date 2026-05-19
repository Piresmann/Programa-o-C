#include <stdio.h>

int main (){
// Float - Variavel de ponto flutuante. Double é usado para números com mais precisão

    float x = 5.5;
    float y = 2.2;
    float soma = x+y;
    float diferenca = x-y;
    float produto = x*y;
    float quociente = x/y; // Divisão de ponto flutuante.

    // Impressão de resultados

    printf ("A Soma é: %.1f \n", soma);
    printf ("A diferença é: %.2f \n", diferenca);
    printf ("O produto é: %.2f \n", produto);
    printf ("O quociente é: %.2f \n", quociente);

return 0;


}