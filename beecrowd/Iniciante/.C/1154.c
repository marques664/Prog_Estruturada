#include <stdio.h>

int main() {
    int idade, soma = 0, contador = 0;
    while(1){
        scanf("%d", &idade);
        if(idade < 0){
            break;
        } else{
            soma += idade;
            contador++;
        }
    }
    double media = (double)soma/contador;
    printf("%.2lf\n", media);
    return 0;
}
