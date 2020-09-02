#include <stdio.h>
 
int main() {
 
    double vet[6];
    int i, positivo = 0;
    for (i=0; i<6; i++){
        scanf("%lf", &vet[i]);
        if (vet[i] > 0){
            positivo++;
        }
        
    }
    printf("%d valores positivos\n", positivo);
    return 0;
}