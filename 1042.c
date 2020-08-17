#include <stdio.h>

int main() {
    int a, b, c, x, y, z, aux = 0;
    scanf("%d%d%d", &a, &b, &c);
    x = a;
    y = b;
    z = c;
    
    if (x>y){
        aux = y;
        y = x; 
        x = aux;  
    } 
    if (x>z){
        aux = z;
        z = x;
        x = aux;
    }
    if (y>z){
        aux = z;
        z = y;
        y = aux;
    }
    
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n\n", z);
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);

    return 0;
}