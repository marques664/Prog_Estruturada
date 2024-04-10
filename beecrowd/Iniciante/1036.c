#include <stdio.h>
#include <math.h>
int main () {
    double a, b, c, delta, res1, res2;
    scanf("%lf %lf %lf", &a, &b, &c);
    if(a == 0){
        printf("Impossivel calcular\n");
    } else {
        delta = pow(b, 2) - 4 * a * c;
             if(delta < 0) {
                printf("Impossivel calcular\n");
            } else {
                res1 = (-b + sqrt(delta)) / (2 * a);
                res2 = (-b - sqrt(delta)) / (2 * a);
                printf("R1 = %.5lf\n", res1);
                printf("R2 = %.5lf\n", res2);
            }
    }
    return 0;
}
