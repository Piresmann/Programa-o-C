#include <stdio.h>

int main (){
    //Vamos verificar a permissão para votar.

    int idade;
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("Você tem permissão para votar! \n");
    } else {
        printf("Você não tem permissão para votar! \n");    
    }

return 0;

}
