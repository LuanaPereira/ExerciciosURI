#include <stdio.h>
 
int main() {
    int numFunc, qtdHora;
    double valorHora, valorSalario = 0;
    scanf("%d%d%lf", &numFunc, &qtdHora, &valorHora);

    valorSalario = valorHora * qtdHora;

    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", numFunc, valorSalario);


    return 0;
} 