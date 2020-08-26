#include <stdio.h>

int main() {
    int distancia, diametroSauron, diametroSarumam;
    double icm = 0;
    scanf("%d%d%d", &distancia, &diametroSauron, &diametroSarumam);
    icm = (double)distancia / ((double)diametroSauron + (double)diametroSarumam);
    printf("%.2lf\n", icm);

    return 0;
}