#include <stdio.h>
 
int main() {
    double a, b, c;
    double triangulo = 0, circulo = 0, trapezio = 0, quadrado = 0, retangulo = 0; 
    scanf("%lf%lf%lf", &a, &b, &c);
    triangulo = (a * c)/2; 
    circulo = 3.14159 * c * c;
    trapezio = (a + b)/2 * c;
    quadrado = b * b;
    retangulo = a * b;
    printf("TRIANGULO: %.3lf\n",triangulo);
    printf("CIRCULO: %.3lf\n", circulo);
    printf("TRAPEZIO: %.3lf\n", trapezio);
    printf("QUADRADO: %.3lf\n", quadrado);
    printf("RETANGULO: %.3lf\n", retangulo);

    return 0;
}  