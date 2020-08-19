#include <stdio.h>

int main(){
    int hora, minuto;
    while (scanf("%d%d", &hora, &minuto) != EOF){
        int horaAux = 0, minutoAux = 0;
        horaAux = hora / 30;
        minutoAux = minuto / 6;
        
        printf("%.2d:%.2d\n", horaAux, minutoAux);
        
        
    }
    return 0;
}