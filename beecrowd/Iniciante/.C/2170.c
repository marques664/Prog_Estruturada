#include <stdio.h>
#include <math.h>
int main(){
    double inv, rend, TIR;
    int X = 1;
    while(scanf("%lf %lf", &inv, &rend) != EOF){
    TIR = ((rend - inv) / inv) * 100;
    printf("Projeto %d:\nPercentual dos juros da aplicacao: %.2lf %%\n\n", X, TIR);
    X++;
    }
    return 0;
}
