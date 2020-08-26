#include <stdio.h>

int main() {
    int segundosEvento, segundos = 0, minutos = 0, horas = 0, restoHoras = 0;
    scanf("%d", &segundosEvento);
    horas = segundosEvento / 3600;
    restoHoras = segundosEvento % 3600;
    minutos = restoHoras / 60 ;
    segundos = segundosEvento % 60;
    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
}   