#include <stdio.h>
#include <math.h>

int main () {
    float l1, l2, res;
    printf("Digite o tamanho dos lados:\n");
    scanf("%f %f", &l1, &l2);
    res = sqrt(pow(l1,2) + pow(l2,2));
    printf("A diagonal mede: %.2lf\n", res);
    return 0;
} 
