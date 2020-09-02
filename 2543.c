#include <stdio.h>

int main() {
    int gamePlays, identificador, idUniversidade, jogo, cont = 0, i;
    while (scanf("%d%d", &gamePlays, &identificador) != EOF){
        for (i=0; i<gamePlays; i++){
            scanf("%d%d", &idUniversidade, &jogo);
            if (identificador == idUniversidade && jogo == 0){
                cont++;
            }
        }
        
        printf ("%d\n", cont);
        cont = 0;
    }
   
    return 0;
}