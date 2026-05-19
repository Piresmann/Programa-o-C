#include <stdio.h>

int main(){
    
    char nome[20];
    int idade;
    char sexo;
    float altura;
    char opção;

printf("Digite seu nome:");
scanf("%s", nome);
printf("Seu nome é: %s\n",nome);

printf("Digite sua Idade:");
scanf("%d", &idade);
printf("Sua idade é:%d \n",idade);

printf("Digite sua altura:");
scanf("%f", &altura);
printf("Sua altura é:%.2f \n",altura);

printf("Digite sua opção(S/N):");
scanf(" %c",&opção);
printf("Sua opção foi:%c \n",opção);

printf("Digite seu SEXO(M/F):");
scanf(" %c",&sexo);
printf("Seu Sexo é:%c \n",sexo);

printf("Obrigado pelas informações ! Tenha uma boa vida \n");

/*scanf(''formato'', &variavel);
Você precisa sempre colocar o caractere “&” antes de cada variável que será lida.




*/

}