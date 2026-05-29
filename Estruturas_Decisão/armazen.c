#include <stdio.h>

int main (){
    float temperatura, umidade;
    unsigned int estoque, estoqueminimo = 1000;

    printf("Entre com a Temperatura: \n");
    scanf("%f",&temperatura);
    printf("Entre com a Umidade: \n");
    scanf("%f", &umidade);
    printf("Entre com o Estoque: \n");
    scanf("%u", &estoque);

    if (temperatura > 30) {
        printf("A temperatura esta ALTA ! \n");
    } else {
        printf("A temperatura está adequada \n");
    }

    if (umidade > 50) {
        printf("A umidade esta elevada ! \n");
    } else {
        printf("A umidade esta adequada \n");
    }

    if (estoque < estoqueminimo ) {
        printf("Estoque abaixo do minimo ! \n");
    } else {
        printf("Estoque em conformidade \n");
    }

return 0;

}