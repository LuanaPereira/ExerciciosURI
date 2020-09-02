#include <stdio.h>

int main(){
    int frango, bife, massa, cFrango, cBife, cMassa, semRefeicao = 0;
    scanf("%d%d%d", &frango, &bife, &massa);
    scanf("%d%d%d", &cFrango, &cBife, &cMassa);

    if (frango<cFrango){
        semRefeicao += cFrango - frango;
    }
    if (bife<cBife){
        semRefeicao += cBife - bife;
    }
    if (massa<cMassa){
        semRefeicao += cMassa - massa;
    }
    printf("%d\n", semRefeicao);



    return 0;
}