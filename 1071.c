#include <stdio.h>
 
int main() {
 
    int x, y, soma = 0, aux, i;
    scanf("%d%d", &x, &y);
    if (x>y){
        aux = x;
        x = y;
        y = aux;
    }
    for (i=x+1; i<y; i++){
        if (i%2 != 0){
            soma += i;
        }
    }
    printf("%d\n", soma);
    return 0;
}