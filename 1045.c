#include <stdio.h>

int main() {
    int i;
    double vetor[3], aux = 0;
    for (i=0; i<3; i++){
        scanf("%lf", &vetor[i]);
    }
    if (vetor[0]<vetor[1]){
        aux = vetor[1];
        vetor[1] = vetor[0];
        vetor[0] = aux;
    }
    if (vetor[0]<vetor[2]){
        aux = vetor[2];
        vetor[2] = vetor[0];
        vetor[0] = aux;
    }
    if (vetor[1]<vetor[2]){
        aux = vetor[2];
        vetor[2] = vetor[1];
        vetor[1] = aux;
    }
    
   // printf("%lf %lf %lf", vetor[0], vetor[1], vetor[2]);


    if (vetor[0] >= (vetor[1]+vetor[2])){
        printf("NAO FORMA TRIANGULO\n");
    }
    if ((vetor[0]*vetor[0]) == ((vetor[1]*vetor[1]) + (vetor[2]* vetor[2]))){
        printf("TRIANGULO RETANGULO\n");
    }
    if ((vetor[0]*vetor[0]) > ((vetor[1]*vetor[1]) + (vetor[2]*vetor[2]) ) ){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if ((vetor[0]*vetor[0]) < ((vetor[1]*vetor[1]) + (vetor[2]* vetor[2]))){
         printf("TRIANGULO ACUTANGULO\n");
    }
    if (vetor[0] == vetor[1] && vetor[1] == vetor[2]){
        printf("TRIANGULO EQUILATERO\n");
    }
    if (vetor[0] == vetor[1] && vetor[2]    || vetor[0] == vetor[2] || vetor[1]==vetor[2]){
        printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}