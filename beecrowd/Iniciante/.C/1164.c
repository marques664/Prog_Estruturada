#include <stdio.h>

int main() {
    int n, x, i, soma;

    scanf("%d", &n);

    for (int j = 0; j < n; j++) {
        scanf("%d", &x);
        soma = 0;
        for (i = 1; i < x; i++) {
            if (x % i == 0) {
                soma += i;
            }
        }
        if (soma == x) {
            printf("%d eh perfeito\n", x);
        } else {
            printf("%d nao eh perfeito\n", x);
        }
    }

    return 0;
}
