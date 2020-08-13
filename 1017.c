#include <stdio.h>

 
int main() {
    int tempoViagem, velocidade;
    double qtdLitros = 0;
    scanf("%d%d", &tempoViagem, &velocidade);
    qtdLitros = (velocidade / 12.0) * tempoViagem;
    printf("%.3lf\n", qtdLitros);

    return 0;
}  