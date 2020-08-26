#include <stdio.h>

int main() {
    int distancia;
    scanf("%d", &distancia);
    if (distancia<=800){
        printf("1\n");
    }
    else if (800 < distancia && distancia <= 1400){ 
        printf("2\n");
    }
    else if (1400 < distancia && distancia <= 2000){
        printf("3\n");
    }
    return 0;
}