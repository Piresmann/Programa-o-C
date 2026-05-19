#include <stdio.h>

int main (){

//Vamos trabalhar com a conversão de dados utilizando o modelo explicito (casting)

    int a = 33;
    int b = 5;
    float quociente = (float) a / b; // A variavel "a" esta sendo forçada a ser convertida de int para float usando o casting ()

    printf ("Quocioente: %.2f \n", quociente);

    return 0;


}