#include <stdio.h>

int main() {
    int horaInicio, horaFinal, result = 0, aux = 0;
    scanf("%d%d", &horaInicio, &horaFinal);

    if (horaInicio<horaFinal){
        result = horaFinal - horaInicio;
    }
    else if (horaInicio == horaFinal){
        result = 24;
    } else if (horaInicio>horaFinal){
        aux = 24 - horaInicio;
        result = horaFinal + aux;
    }
    printf("O JOGO DUROU %d HORA(S)\n", result);
    return 0;
}