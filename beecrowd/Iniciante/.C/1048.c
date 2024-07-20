#include <stdio.h>

int main(){
    double salario,novoSalario;
    int percentualReajuste;
    scanf("%lf", &salario);
    if(salario <= 400.00){
                percentualReajuste = 15;
            } else if(salario <= 800.00){
                percentualReajuste = 12;
            } else if(salario <=1200.00){
                percentualReajuste = 10;
            } else if(salario <= 2000.00){
                percentualReajuste = 7;
            } else{
                percentualReajuste = 4;
            }
    double reajuste = salario * (percentualReajuste / 100.0);
    novoSalario = salario + reajuste;

    printf("Novo salario: %.2lf\n", novoSalario);
    printf("Reajuste ganho: %.2lf\n", reajuste);
    printf("Em percentual: %d %%\n", percentualReajuste);
    return 0;
}
