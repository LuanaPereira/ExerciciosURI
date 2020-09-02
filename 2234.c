#include <stdio.h>

int main() {
    int cachorros, pessoas;
    double media = 0;
    scanf("%d%d", &cachorros, &pessoas);
    media = (double)cachorros / (double)pessoas;
    printf("%.2lf\n", media);


    return 0;
}