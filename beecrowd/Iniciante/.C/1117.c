#include <stdio.h>

int main(){
    float nota1, nota2;

    while (1) {
        scanf("%f", &nota1);
        if (nota1 >= 0 && nota1 <= 10) {
            break;
        } else {
            printf("nota invalida\n");
        }
    }

    while (1) {
        scanf("%f", &nota2);
        if (nota2 >= 0 && nota2 <= 10) {
            break;
        } else {
            printf("nota invalida\n");
        }
    }

    float media = (nota1 + nota2) / 2.0;
    printf("media = %.2f\n", media);

    return 0;
}
