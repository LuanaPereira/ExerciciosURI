#include <stdio.h>
 
int main() {
    int valorEntrada, cem = 0, cinquenta = 0, vinte = 0, dez = 0, cinco = 0, dois = 0, um = 0, sobraCem = 0, sobraCinquenta = 0, sobraVinte = 0, sobraDez = 0, sobraCinco = 0, sobraDois = 0;

    scanf("%d", &valorEntrada);

    cem = valorEntrada / 100;
    sobraCem = valorEntrada % 100;
    cinquenta = sobraCem / 50;
    sobraCinquenta = sobraCem % 50;
    vinte = sobraCinquenta / 20;
    sobraVinte = sobraCinquenta % 20;
    dez = sobraVinte / 10;
    sobraDez = sobraVinte % 10;
    cinco = sobraDez / 5;
    sobraCinco = sobraDez % 5;
    dois = sobraCinco / 2;
    sobraDois = sobraCinco % 2;
    um = sobraDois / 1;

    printf("%d\n", valorEntrada);
    printf("%d nota(s) de R$ 100,00\n", cem);
    printf("%d nota(s) de R$ 50,00\n", cinquenta);
    printf("%d nota(s) de R$ 20,00\n", vinte);
    printf("%d nota(s) de R$ 10,00\n", dez);
    printf("%d nota(s) de R$ 5,00\n", cinco);
    printf("%d nota(s) de R$ 2,00\n", dois);
    printf("%d nota(s) de R$ 1,00\n", um);

    return 0;
}  