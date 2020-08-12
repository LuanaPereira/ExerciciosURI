#include <stdio.h>
 
int main() {
    int a, b, c, i, aux = 0;
    scanf("%d%d%d", &a, &b, &c);
    if (a>aux){
        aux = a;
    }
    if (b>aux){
        aux = b;
    }
    if (c>aux){
        aux = c;
    }
    printf("%d eh o maior\n", aux);


    return 0;
}  