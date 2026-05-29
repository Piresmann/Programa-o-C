#include <stdio.h>

int main (){
 //Vamos verificar número positivo , negativo ou zero.

 int n;
    printf("Digite um número: ");
    scanf("%d", &n);

    if (n>0) {
        printf("O número é positivo. \n");
    } else if (n<0) {
        printf("O número é negativo. \n");
    } else {
        printf("O número é zero. \n");
    }

    return 0;
}