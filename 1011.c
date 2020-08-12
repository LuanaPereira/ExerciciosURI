#include <stdio.h>
 
int main() {
    double aux = 4.0/3, pi = 3.14159, raio, volume = 0;
    scanf("%lf", &raio);
    volume = aux * pi * raio * raio * raio;
    printf("VOLUME = %.3lf\n", volume);

    return 0;
}  