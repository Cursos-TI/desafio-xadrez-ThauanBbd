#include <stdio.h>

int main () {
    int i, i2;
    printf("Digite quantas casas a Rainha deve andar para à esquerda:\n");
    scanf("%d", &i);
    for(i; i >= 1; i--){
        printf("Esquerda\n");

    }
    printf("Digite quantas casa andar para direita ou digite acima de 9 para mexer o bispo:\n");
    scanf("%d", &i2);
    if(i2  >= 9){
        printf("Sem movimento de retorno!\n");
    }else{
    for(i2; i2 >= 1; i2--){
        printf("Direita\n");

    }
        
        }
         int i3, i4;
    //i3 representa o número de casas
    printf("Digite o número de casa que o bispo deve andar:\n");
    scanf("%d", &i3);

    while(i3 >= 1){
        printf("Diagonal cima direita\n");
        i3--;
        }
         printf("Digite o número de casas que o bispo deve voltar ou digite acima de 9 para mover a torre.\n");
        scanf("%d", &i4);
        if(i4 >= 9){
            printf("Sem movimento de retorno!\n"); 
        }else{
            while(i4 >= 1){
                printf("Diagonal baixo esquerda\n");
                i4--;
            }

        }
int i5, i6;
    //i5 representa o número de casas que a torre deve andar para a direita
    //i6 representa o número de casa que a torre deve andar para a esquerda
    do{
        printf("Digite o número de casa que a torre deve andar para à direita:\n");
    scanf("%d", &i5);

    }while(i5 <= 1);{
        printf("Você andou %d casa à direita.\n", i5);
    i5--;
    }
    do{
        printf("Digite o número de casas que deseja voltar.\n");
        scanf("%d", &i6);
    
    }while(i6 >= 8);{
        printf("Você andou %d casa à esquerda.\n", i6);
        printf("Digite 0 se deseja encerrar.\n");
        scanf("%d", &i6);
    }
    printf("Jogo encerrado!\n");


return 0;
