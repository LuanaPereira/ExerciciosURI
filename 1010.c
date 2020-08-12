#include <stdio.h>
 
int main() {
    int codigo[2], qtdPecas[2], i;
    double valorUnitario[2], valorTotal = 0;
    
    for (i=0; i<2; i++){
        scanf("%d%d%lf", &codigo[i], &qtdPecas[i], &valorUnitario[i]);
    }

    for (i=0; i<2; i++){
        valorTotal += qtdPecas[i] * valorUnitario[i];
    }
    printf("VALOR A PAGAR: R$ %.2lf\n", valorTotal);

    return 0;
}  