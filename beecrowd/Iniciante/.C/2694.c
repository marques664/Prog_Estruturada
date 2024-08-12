#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        char linha[15];
        scanf("%14s", linha);

        int soma = 0;
        int num = 0;
        for (int j = 0; j < 14; j++) {
            if (linha[j] >= '0' && linha[j] <= '9') {
                num = num * 10 + (linha[j] - '0');
            } else if (num != 0) {
                soma += num;
                num = 0;
            }
        }
        if (num != 0) {
            soma += num;
        }

        printf("%d\n", soma);
    }

    return 0;
}
