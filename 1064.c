#include <stdio.h>
 
int main() {
 
    double vet[6], media = 0;
    int i, positivo = 0;
    for (i=0; i<6; i++){
        scanf("%lf", &vet[i]);
        if (vet[i] > 0){
            positivo++;
            media += vet[i];
        }
        
    }
    printf("%d valores positivos\n%.1lf\n", positivo, (media/positivo));
    return 0;
}