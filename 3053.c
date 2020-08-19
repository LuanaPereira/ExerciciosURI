#include <stdio.h>

int main() {
    int qtdMovimento, i;
    char posicao;
    scanf("%d %c", &qtdMovimento, &posicao);

    for (i=0; i<qtdMovimento; i++){
        int tipoMovimento = 0;
        scanf("%d", &tipoMovimento);
        if (tipoMovimento == 1){
            if (posicao == 'A'){
                posicao = 'B';
            }else if (posicao == 'B'){
                posicao = 'A';
            }
        }
        else if (tipoMovimento == 2){
            if (posicao == 'B'){
                posicao = 'C';
            } else if (posicao == 'C'){
                posicao = 'B';
            }
        }
        else if (tipoMovimento == 3){
            if (posicao == 'A'){
                posicao = 'C';
            }else if (posicao == 'C'){
                posicao = 'A';
            }
        }

    }
    printf("%c\n", posicao);
    return 0;
}