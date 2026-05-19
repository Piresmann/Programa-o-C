#include <stdio.h>

int main (){
    int idade, matricula;
    float altura;
    char nome[20];

    printf("Digite sua idade:");
    scanf("%d", &idade);

    printf("Digite sua altura:");
    scanf("%f", &altura);

    printf("Digite o seu nome:");
    scanf("%s", &nome);

    printf("Digite sua matrícula:");
    scanf("%d", &matricula);

    printf("Nome do Aluno: %s - Matrícula: %d \n",nome ,matricula);
    printf("Idade %d - Altura: %.2f \n", idade, altura);

    return 0;






}