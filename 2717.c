#include <stdio.h>

int main() {
    int minFinais, min1, min2;
    scanf("%d%d%d", &minFinais, &min1, &min2);
    if (minFinais < (min1+min2)){
        printf("Deixa para amanha!\n");
    }
    else {
        printf("Farei hoje!\n");
    }
    return 0;
}