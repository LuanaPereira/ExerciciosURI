#include <stdio.h>

int main(){
    double n1, n2, n3, n4, media = 0;
    scanf("%lf%lf%lf%lf", &n1, &n2, &n3, &n4);

    media = ((n1*2) + (n2*3) + (n3*4) + (n4*1)) / 10;
    printf("Media: %.1lf\n", media);
    
    if (media >= 7.0){
        printf("Aluno aprovado.\n");
    }
    else if (media < 5.0){
        printf("Aluno reprovado.\n");
    }
    else if (media < 7.0 && media >= 5.0){
        printf("Aluno em exame.\n");
        double nExame, mediaExame = 0;
        scanf("%lf", &nExame);
        printf("Nota do exame: %.1lf\n", nExame);
        mediaExame = (media + nExame) / 2;
        if (mediaExame >= 5.0){
            printf("Aluno aprovado.\n");
        }
        else if (mediaExame < 5.0){
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n", mediaExame);
    }
    return 0;
}