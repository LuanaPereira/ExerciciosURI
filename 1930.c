#include <stdio.h>
 
int main() {
 
    int t1, t2, t3, t4, aparelhos = 0;
    scanf("%d%d%d%d", &t1, &t2, &t3, &t4);
    aparelhos = (t1-1)+(t2-1)+(t3-1)+t4;
    printf("%d\n", aparelhos);
    
    return 0;
}