#include <stdio.h>
 
int main() {
    int codigo, qtdItem;
    double valor = 0;
    scanf("%d%d", &codigo, &qtdItem);
    if (codigo == 1){
        valor = qtdItem * 4.00;
    } else if (codigo == 2){
        valor = qtdItem * 4.50;
    } else if (codigo == 3){
        valor = qtdItem * 5.00;
    } else if (codigo ==4){
        valor = qtdItem * 2.00;
    } else if (codigo == 5){
        valor = qtdItem * 1.50;
    }
    printf("Total: R$ %.2lf\n", valor);
    return 0;
}