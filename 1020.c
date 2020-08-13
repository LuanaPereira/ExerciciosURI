#include <stdio.h>

int main() {
    int idadeDias, ano = 0, mes = 0, dias = 0, restoAno = 0, restoMes = 0;
    scanf("%d", &idadeDias);
    ano = idadeDias / 365;
    
    restoAno = idadeDias % 365;
    mes = restoAno / 30 ;
    
    //restoMes = restoAno % 30;
    dias = restoAno % 30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dias);

    return 0;
}   