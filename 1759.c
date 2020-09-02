#include <stdio.h>

int main() {
    int qtdHo, i;
    scanf("%d", &qtdHo);
    for (i=1; i<=qtdHo; i++){
        if (i==qtdHo){
            printf("Ho!\n");
            return ;
        }
        printf("Ho ");
    }
    return 0;
}