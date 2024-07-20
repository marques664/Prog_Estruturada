#include <stdio.h>

int main() {
    int valor;
    int maior_valor = -1;
    int posicao_maior_valor = -1;
    int i = 1;

    while (i <= 100) {
        scanf("%d", &valor);
        if (valor > maior_valor) {
            maior_valor = valor;
            posicao_maior_valor = i;
        }
        i++;
    }

    printf("%d\n", maior_valor);
    printf("%d\n", posicao_maior_valor);

    return 0;
}
