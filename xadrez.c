#include <stdio.h>
int main (){
    int i, i2;
    //i= esquerda, i2= direita
    printf("Digite o número de casa que deseja andar para esquerda:\n")
        scanf("%d", &i);
    for(i; i <= 1; 1--){
        printf("Esquerda\n");
    }
    printf(Digite quantas casa deseja retornar à direita:\n");
        scanf("%d", &i2);
    for(i2; i2 <= 1; i2--){
        printf("Direita\n");
    }


    return 0;
}
