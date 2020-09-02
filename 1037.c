#include <stdio.h>
 
int main() {
 
    double numQualquer;
    scanf("%lf", &numQualquer);

    if (numQualquer >= 0 && numQualquer <= 25){
        printf("Intervalo [0,25]\n");
    }
    else if (numQualquer > 25 && numQualquer <= 50){
        printf("Intervalo (25,50]\n");
    }
    else if (numQualquer > 50 && numQualquer <= 75){
        printf("Intervalo (50,75]\n");
    } 
    else if (numQualquer > 75 && numQualquer <= 100){
        printf("Intervalo (75,100]\n");
    }
    else {
        printf("Fora de intervalo\n");
    }
    return 0;
}