#include <stdio.h>

int main() {
    int golInter, golGremio, controle, vInter = 0, vGremio = 0, empates = 0, grenais = 0, aux = 1;
    while (aux)
    {
        scanf("%d%d", &golInter, &golGremio);
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &controle);
        grenais ++;
        if (golGremio>golInter){
            vGremio ++;
        }
        else if (golGremio<golInter){
            vInter ++;
        }
        else {
            empates ++;
        }
        if (controle == 2){
            aux = 0;
        }
    }
    if (vGremio>vInter){
        printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\nGremio venceu mais\n", grenais, vInter, vGremio, empates);
    }
    else if (vGremio<vInter){
        printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\nInter venceu mais\n", grenais, vInter, vGremio, empates);
    }
    else {
        printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\nNao houve vencedor\n", grenais, vInter, vGremio, empates);
    }


    return 0;
}