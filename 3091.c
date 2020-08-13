#include <stdio.h>
 
int main() {
 
    int a, b, resultado = 0;
    scanf("%d%d", &a, &b);
    resultado = a % b;
    printf("%d\n", resultado);
 
    return 0;
}