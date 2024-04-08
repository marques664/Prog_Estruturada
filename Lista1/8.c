#include <stdio.h>
#include <math.h>
int main() {
    double n1, res1, res2, res3;
    scanf("%lf", &n1);
    res1 = sqrt(n1);
    res2 = pow(n1, 5);
    res3 = log(n1);
    printf("Raiz quadrada = %.2lf\nNumero elvado a 5 = %.2lf\nLog na base 10 = %.2lf\n", res1, res2, res3);
    return 0;
}
