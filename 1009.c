#include <stdio.h>
 
int main() {
    char nome[255];
    double salario, vendas, salTotal = 0;
    scanf("%s%lf%lf", &nome, &salario, &vendas);

    salTotal = (vendas * 0.15) + salario;

    printf("TOTAL = R$ %.2lf\n", salTotal);


    return 0;
}  