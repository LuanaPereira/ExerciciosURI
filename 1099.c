#include <stdio.h>

int main(){
    int qtdTeste, i;
    scanf("%d", &qtdTeste);
    for (i=0; i<qtdTeste; i++){
        int x, y, j, soma = 0, aux = 0;
        scanf("%d%d", &x, &y);
        if (x>y){
            aux = x;
            x = y;
            y = aux;
        }
    
        for (j=x+1; j<y; j++){
            if (j%2 != 0){
                soma += j;
            }
        }
        printf("%d\n", soma);
    }
    return 0;
}